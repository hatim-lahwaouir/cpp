/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 09:47:37 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/21 13:03:17 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# include "iostream"
# include "fstream"
# include "map"
# include "set"
# include <string>


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
        // reading data base 
        void    read_db();

        // date validation
        long    date_format(const std::string&) const;
            // days validation by
            bool    day_validation(int day, int year, int mounth) const;
        // bitcoin value validation
        float bitcoin_value_format(const std::string&) const;
        
        class InvalidFile :public std::exception
        {
            const char *what() const throw();
        };

        class InvalidDate :public std::exception
        {
            const char *what() const throw();
        };

        class InvalidBitcoinValue :public std::exception
        {
            const char *what() const throw();
        };

};
#endif