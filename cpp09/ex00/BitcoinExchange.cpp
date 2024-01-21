/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:01:11 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/21 14:45:24 by hlahwaou         ###   ########.fr       */
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


// ********************** Exceptions **************************

const char * BitcoinExchange::InvalidFile::what() const throw()
{
    return ("An error occurred while opening the file");
}

const char * BitcoinExchange::InvalidDate::what() const throw()
{
    return ("Invalid date");
}

const char * BitcoinExchange::InvalidBitcoinValue::what() const throw()
{
    return ("Invalid Bitcoin value");
}



// ********************** validation **************************

bool BitcoinExchange::day_validation(int day, int year, int mounth) const
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


long BitcoinExchange::date_format(const std::string &date) const
{

    if (date.size() > 10 || date.size() == 0)
        throw BitcoinExchange::InvalidDate();
    std::string nbr;
    size_t      pos = date.find_first_of('-', 0);
    size_t      r = 0;
    // we have four numbers in the date format
    int         n = 0;
    // key for the map
    long year = 0;
    long day = 0;
    long mounth = 0;


    while (true)
    {
        pos = date.find_first_of('-', r);
        std::cout << nbr << "\n";
        if (n == 3)
            break;
        nbr = date.substr(r, pos - r);
        // if we got an empty field or the size of numbers doesn't match
        if (nbr.size() == 0 || n == 3)
            throw BitcoinExchange::InvalidDate();
        // checking if the day representation is good
        if (n == 0 && (nbr.size() != 4 || std::atoi(nbr.c_str()) < 2009))
            throw BitcoinExchange::InvalidDate();
        if (n == 1 && mounths.count(nbr) != 1)  
            throw BitcoinExchange::InvalidDate();
        
        if (n == 2 && days.count(nbr) != 1)
            throw BitcoinExchange::InvalidDate();
        
        if (n == 2 && !day_validation(std::atoi(nbr.c_str()), year, mounth))
            throw BitcoinExchange::InvalidDate();


        for (size_t i = 0; i < nbr.size(); i++)
            if (!std::isdigit(nbr[i]))
                throw BitcoinExchange::InvalidDate();

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
        throw BitcoinExchange::InvalidDate();   
    return year * 10000 + mounth * 100 + day;
}

float BitcoinExchange::bitcoin_value_format(const std::string &date) const
{
    (void)date;
    return (0.01);
}

// ********************* reading db file **************************

void BitcoinExchange::read_db()
{
    std::ifstream db;

    db.open(dbFileName);

    if (!db.is_open())
        throw BitcoinExchange::InvalidFile();

    std::string line;

    while(std::getline(db, line, '\n'))
    {
        size_t idx = line.find(',');
        if (idx == std::string::npos)
            throw BitcoinExchange::InvalidDate();

        std::string date = line.substr(0, idx);
        long    key = date_format(date.substr(0, date.find(' ')));
        float value = bitcoin_value_format(line.substr(idx + 1, std::string::npos));
        this->db[key] = value;
    }
}



// ********************** Destructor *************

BitcoinExchange::~BitcoinExchange(){}