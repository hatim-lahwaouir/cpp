/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 02:03:50 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/16 01:09:28 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::sizeFractionalBits = 8;
// ******************************** constructors ******************************** 
// ******************************** ******************************** ************

Fixed::Fixed()
{
    this->_bufr = 0;
}

Fixed::Fixed(Fixed const &obj)
{
    *this = obj;
}

Fixed::Fixed(const int nbr)
{
    this->_bufr = (nbr << 8);
}

Fixed::Fixed(const float nbr)
{
    float   tmp;
    float   table[8] = {0.5, 0.25, 0.125, 0.0625, 0.03125 ,0.015625, 0.0078125, 0.00390625};
    int     i;


    this->_bufr = 0;
    this->_bufr = ((int)nbr << 8);

    tmp = nbr - (int)nbr;
    
    if ((int)nbr == 0 && nbr < 0)
    {
        this->_bufr = -1;
        this->_bufr = this->_bufr << 8;
    }
    
    if (tmp < 0)
        tmp = tmp + 1;
    i = 0;
    while (i < 8)
    {
        if (table[i] <= tmp)
        {
            this->_bufr += (1  << (Fixed::sizeFractionalBits - i - 1));
            tmp -= table[i];
        }
        i += 1;
    }
}

// ******************************** destructor ******************************** 
// ******************************** ******************************** ************
Fixed::~Fixed() {}

// ******************************** member functions ******************************** 
// **********************************************************************************

int Fixed::getRawBits() const
{
    return (this->_bufr);
}

void    Fixed::setRawbits(int const raw)
{
    this->_bufr  = raw;
}


float   Fixed::toFloat(void) const
{
    float   ret;
    int     i;

    float   table[8] = {0.5, 0.25, 0.125, 0.0625, 0.03125 ,0.015625, 0.0078125, 0.00390625};
    i = 0;
    ret = (this->_bufr >> 8);
    
    while (i < 8)
    {
        if ((this->_bufr >> (Fixed::sizeFractionalBits - 1 - i)) & 1)
            ret += (table[i]);
        i += 1;
    }
    return (ret);
}

int   Fixed::toInt(void) const
{
   return (this->_bufr >> 8);
}
// ******************************** operator overloading ******************************** 
// **********************************************************************************

std::ostream &operator<<(std::ostream &stream, const Fixed &obj)
{
    stream << obj.toFloat();
    return (stream);
}