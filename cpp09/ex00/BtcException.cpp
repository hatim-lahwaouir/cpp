/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BtcException.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:33:53 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/22 15:59:19 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BtcException.hpp"


// ********************** Exceptions **************************

// file orthod....
const char * InvalidFile::what() const throw()
{
    return ("An error occurred while opening the file");
}

InvalidFile::~InvalidFile() throw() {};

InvalidFile::InvalidFile() throw() : std::exception()
{
    
}

InvalidFile::InvalidFile(const std::string &err) throw() : std::exception()
{    
    this->errfr = "An error occurred while opening the file{" + err + "}";
}

InvalidFile::InvalidFile(const InvalidFile &obj) throw() : std::exception(obj)
{
    *this = obj;
    
}

InvalidFile&  InvalidFile::operator=(InvalidFile const &obj) throw()
{
    if (this == &obj)
        return *this;
    this->errfr = obj.errfr;
    return *this;  
}

// errfr orthod....
InvalidDate::InvalidDate(const std::string &d) throw() : std::exception()
{
    errfr = "Invalid date {";
    errfr += d;
    errfr += "}";

}

InvalidDate::InvalidDate() throw() : std::exception()
{
    errfr = "";   
}

InvalidDate::InvalidDate(InvalidDate const &obj) throw()
{
    *this = obj;
}

InvalidDate& InvalidDate::operator=(InvalidDate const &obj) throw()
{
    std::exception::operator=(obj);
    if (this == &obj)
        return *this;
    *this = obj;
    return *this;  
}


const char * InvalidDate::what() const throw()
{
    return (errfr.c_str());
}

InvalidDate::~InvalidDate() throw() {};


// btc orthod....

const char * InvalidBitcoinValue::what() const throw()
{
    return (errfr.c_str());
}

InvalidBitcoinValue::InvalidBitcoinValue(std::string reason) throw()
{
    errfr = "Invalid btc value {" + reason +  "}";
}

InvalidBitcoinValue::InvalidBitcoinValue() throw() : std::exception() {}
InvalidBitcoinValue::InvalidBitcoinValue(InvalidBitcoinValue const &obj) throw()
{
    *this = obj;
}

InvalidBitcoinValue& InvalidBitcoinValue::operator=(InvalidBitcoinValue const &obj) throw()
{
    std::exception::operator=(obj);
    if (this == &obj)
        return *this;
    this->errfr = obj.errfr;
    *this = obj;
    return *this;
}

InvalidBitcoinValue::~InvalidBitcoinValue() throw() {};


// orth header

const char * InvalidHeader::what() const throw()
{
    return (errfr.c_str());
}

InvalidHeader::InvalidHeader(std::string reason) throw()
{
    errfr = "Invalid Header {" + reason +  "}";
}

InvalidHeader::InvalidHeader() throw() : std::exception() {}
InvalidHeader::InvalidHeader(InvalidHeader const &obj) throw()
{
    *this = obj;
}

InvalidHeader& InvalidHeader::operator=(InvalidHeader const &obj) throw()
{
    std::exception::operator=(obj);
    if (this == &obj)
        return *this;
    this->errfr = obj.errfr;
    *this = obj;
    return *this;
}

InvalidHeader::~InvalidHeader() throw() {};
