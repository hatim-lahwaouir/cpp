/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:01:11 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/27 09:10:43 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string &db_file) : dbFileName(db_file)
{
    std::string arr[] = {"1","2","3","4","5", "6", "7", "8", "9","10", "11","12"};
    days.insert(arr, arr + sizeof(arr) / sizeof(arr[0]));

    std::string arr1[] = {"13","14","15","16","17", "18", "19", "20", "21","22", "23","24"};
    days.insert(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
        
    std::string arr2[] = {"25", "26", "27", "28", "29", "30", "31"};
    days.insert(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));

    std::string arr3[] = {"01","02","03","04","05", "06", "07", "08", "09"};
    days.insert(arr3, arr3 + sizeof(arr3) / sizeof(arr3[0]));



    mounths.insert(arr, arr + sizeof(arr) / sizeof(arr[0]));
    mounths.insert(arr3, arr3 + sizeof(arr3) / sizeof(arr3[0]));

    int arr5[] ={2,4,6,9,11};
    days_30.insert(arr5, arr5 + sizeof(arr5)/ sizeof(arr5[0]));
}


BitcoinExchange::BitcoinExchange(BitcoinExchange const &obj)
{
    *this = obj;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &obj)
{
    if (this == &obj)
        return *this;
    this->db = obj.db;
    this->dbFileName = obj.dbFileName;
    this->days = obj.days;
    this->mounths = obj.mounths;
    this->days_30 = obj.days_30;

    return *this;
}





// ********************** validation **************************

bool BitcoinExchange::day_validation(int day, int year, int mounth)
{
    if (!(day >= 1 && day <= 31))
        return (false);
    
    if (day >= 1 && day <= 28)
        return (true);

    if (year % 4 == 0)
    {
        if (day == 31 && days_30.count(mounth) == 1)
            return (false);
        if (day > 29 && mounth == 2)
            return (false);
    }
    else
    {
        if (day == 31 && days_30.count(mounth) == 1)
            return (false);
        if (day > 28 && mounth == 2)
            return (false);
    }

    return (true);
}


long BitcoinExchange::date_format(std::string date)
{

    std::string badInput = "bad input => ";

    date = trim(date);
    if (date.size() < 8 && date.size() > 10)
        throw Error(badInput + date);
    std::string nbr;
    size_t      pos = date.find_first_of('-', 0);
    size_t      r = 0;
    // we have four numbers in the date format
    int         n = 0;
    // key for the map
    long year = 0;
    long day = 0;
    long mounth = 0;


    while (n < 3)
    {
        pos = date.find_first_of('-', r);
        if (n < 2 && pos == std::string::npos)
            throw Error(badInput + date);
        nbr = date.substr(r, pos - r);
        // if we got an empty field or the size of numbers doesn't match
        if (nbr.size() == 0)
            throw Error(badInput + date);
        
        // checking if the date representation is good
        if (n == 0 && (nbr.size() != 4 || std::atoi(nbr.c_str()) < 2009))
            throw Error(badInput + date);
        if (n == 1 && mounths.count(nbr) != 1)  
            throw Error(badInput + date);
        
        if (n == 2 && days.count(nbr) != 1)
            throw Error(badInput + date);
        
        if (n == 2 && !day_validation(std::atoi(nbr.c_str()), year, mounth))
            throw Error(badInput + date);


        for (size_t i = 0; i < nbr.size(); i++)
            if (!std::isdigit(nbr[i]))
                throw Error(badInput + date);

        if (n == 0)
            year = std::atoi(nbr.c_str());
        else if (n == 1)
            mounth = std::atoi(nbr.c_str());
        else if (n == 2)
            day = std::atoi(nbr.c_str());
            
        r = pos + 1;
        n++;
    }
    if (year == 0 || day == 0 || mounth == 0)
        throw Error(badInput + date);   
    return year * 10000 + mounth * 100 + day;
}


float BitcoinExchange::bitcoin_value_format(std::string btcValue)
{
    // we are having a float number
    if (btcValue.find('.') != std::string::npos)
    {
        size_t i = 0;
        while (i < btcValue.size() && btcValue[i] == ' ')
            i++;
        if (i == btcValue.size() || !std::isdigit(btcValue[i]))
            throw Error("Bad representation");
        while (i < btcValue.size() && std::isdigit(btcValue[i]))
            i++;
        if (btcValue[i] != '.')
            throw Error("Bad representation");
        i++;
        while (i < btcValue.size() && std::isdigit(btcValue[i]))
            i++;
        while (i < btcValue.size())
        {
            if (btcValue[i] != ' ')
                throw Error("Bad representation");
            i++;
        }
    }
    // we are having an int number
    else
    {
        size_t i = 0;
        while (i < btcValue.size() && btcValue[i] == ' ')
            i++;
        if (i < btcValue.size() && btcValue[i] == '-')
            throw Error("not a positive number");
        if (i == btcValue.size() || !std::isdigit(btcValue[i]))
            throw Error("Bad representation");
        while (i < btcValue.size() && std::isdigit(btcValue[i]))
            i++;
        while (i < btcValue.size())
        {
            if (btcValue[i] != ' ')
                throw Error("Bad representation");
            i++;
        }
        std::string nbr = btcValue.substr(btcValue.find_first_of("0123456789"), btcValue.find_last_of("0123456789") + 1);
        if (nbr.size() > 4)
            throw Error("too large number");
        int ret = std::atoi(nbr.c_str());
        if (ret < 0 || ret > 1000)
            throw Error("too large number"); 
        return (ret);
    }

    // if we are here we have a float
    std::string nbr = (btcValue.substr(btcValue.find_first_of("0123456789"), btcValue.find_last_of("0123456789") + 1));

    if (nbr.find('.') > 4)
        throw Error(btcValue);
    
    if (nbr.size() - nbr.find('.') - 1 >= 3)
        nbr.erase(nbr.find('.') + 3, std::string::npos);
    float ret = std::atof(nbr.c_str());
    
    if (ret < 0 || ret > 1000)
        throw Error("too large number");   
    return (ret);
}

// reading headers 

void  BitcoinExchange::read_header(char delimiter, std::ifstream& inputFile)
{
    std::string line;
    std::getline(inputFile, line, '\n');

    size_t delIndex = line.find(delimiter);
    if (delIndex == std::string::npos)
        throw Error("parssing the header");

    std::string date = trim(line.substr(0, delIndex));

    if (date != "date" || delIndex + 1 >= line.size())
        throw Error("parssing the header");
        
    std::string value = trim(line.substr(delIndex + 1, std::string::npos)); 
    if (value != "value")
        throw Error("parssing the header");
    return;
}

// ********************* reading db file **************************

void BitcoinExchange::read_db()
{
    std::ifstream db;

    db.open(this->dbFileName);

    if (!db.is_open())
        throw Error("we couldn't open the data base file");

    std::string line;

    while(std::getline(db, line, '\n'))
    {
        size_t idx = line.find(',');

        long    key = date_format(line.substr(0, idx));

        std::string btcvalue = line.substr(idx + 1, std::string::npos);
        this->db[key] = static_cast<float>(std::atof(btcvalue.c_str()));
    }
}

// ********************* reading input file **************************

void BitcoinExchange::read_input(std::string fileName)
{
    std::ifstream inputFile;

    inputFile.open(fileName);

    int year;
    int day;
    int mounth;
    if (!inputFile.is_open())
        throw Error("we couldn't open the input file");

    try
    {
        read_header('|',inputFile);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return;
    }
    
    std::string line;

    while(std::getline(inputFile, line, '\n'))
    {
        size_t idx = line.find('|');

        try
        {
            long    key = date_format(line.substr(0, idx));
            float value =  bitcoin_value_format(line.substr(idx + 1, std::string::npos));
            std::map<long,float>::iterator it = this->db.lower_bound(key);
            if (it->first != key)
                it--;
            year = key / 10000;
            mounth = (key/ 100) % 100;
            day = key % 100;

            std::cout << year << "-";
            if (day < 10)
                std::cout << '0';
            std::cout << day << "-";
            if (mounth < 10)
                std::cout << '0';
            std::cout << mounth;
            std::cout << " => " << value << " = "<< it->second * value << std::endl;;
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << "\n";
        }
    }
}
// ********************** Destructor *************

BitcoinExchange::~BitcoinExchange(){} 