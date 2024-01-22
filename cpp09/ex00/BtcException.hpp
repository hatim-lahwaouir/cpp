/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BtcException.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:32:33 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/22 15:57:18 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTCEXCEPTION
#define BTCEXCEPTION

#include "iostream"

class InvalidFile :public std::exception
{
    std::string errfr; 
    public:
    const char *what() const throw();
    InvalidFile() throw();
    InvalidFile(const std::string &) throw();
    InvalidFile(const InvalidFile &) throw();
    InvalidFile& operator=(InvalidFile const &) throw();
    ~InvalidFile() throw();
};

class InvalidDate :public std::exception
{
    std::string errfr;
    public:
    InvalidDate(const std::string &) throw();
    const char *what() const throw();
    InvalidDate() throw();
    InvalidDate(InvalidDate const &) throw();
    InvalidDate& operator=(InvalidDate const &) throw();
    ~InvalidDate() throw();
};

class InvalidBitcoinValue :public std::exception
{
    std::string errfr;
    public:
        const char *what() const throw();
        InvalidBitcoinValue() throw();
        InvalidBitcoinValue(std::string) throw();
        InvalidBitcoinValue(InvalidBitcoinValue const &) throw();
        InvalidBitcoinValue& operator=(InvalidBitcoinValue const &) throw();
        ~InvalidBitcoinValue () throw();
};


class InvalidHeader :public std::exception
{
    std::string errfr;
    public:
        const char *what() const throw();
        InvalidHeader() throw();
        InvalidHeader(std::string) throw();
        InvalidHeader(InvalidHeader const &) throw();
        InvalidHeader& operator=(InvalidHeader const &) throw();
        ~InvalidHeader () throw();
};
#endif