/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 09:47:37 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/22 16:05:56 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# include "iostream"
# include "fstream"
# include "map"
# include "set"
# include <string>
# include "BtcException.hpp"
# include "sstream"

std::string trim(std::string);
class BitcoinExchange
{
    // data base file
    std::string dbFileName;
    // map were to store the data from our data base
    std::map<long, float> db;
    // set of mounth
    std::set<std::string> mounths;
    // set of days
    std::set<std::string> days;
    // days that has 30 days
    std::set<int> days_30;

    BitcoinExchange();
    public:
        BitcoinExchange(const std::string &);
        BitcoinExchange(const BitcoinExchange&);
        BitcoinExchange& operator=(const BitcoinExchange&);
        ~BitcoinExchange();
        

        // reading headers
        void read_header(char delimiterl, std::ifstream &);
        // reading data base 
        void    read_db();

        // reading input file 
        void    read_input(std::string inputFile);
        
        // date validation
        long    date_format(std::string);
            // days validation by
            bool    day_validation(int day, int year, int mounth);
        // bitcoin value validation
        float bitcoin_value_format(std::string);

};
#endif