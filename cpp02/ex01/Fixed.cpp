/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 02:03:50 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/15 20:17:30 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::sizeFractionalBits = 8;
// ******************************** constructors ******************************** 
// ******************************** ******************************** ************

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_bufr = 0;
}

Fixed::Fixed(Fixed const &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_bufr = obj.getRawBits();
}


Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    this->_bufr = (nbr << 8);
}

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called" << std::endl;    

    int     n;
    float   tmp;
    float   table[8] = {0.5, 0.25, 0.125, 0.0625, 0.03125 ,0.015625, 0.0078125, 0.00390625};
    int     i;

    
    n = (int)nbr;

    this->_bufr = 0;
    this->_bufr = (n << 8);

    tmp = nbr - (float)n;
    i = 0;
    while (i < 8)
    {
        if (table[i] < tmp)
        {
            this->_bufr += (1  << (Fixed::sizeFractionalBits - i - 1));
            tmp -= table[i];
        }
        i += 1;
    }
}

// ******************************** destructor ******************************** 
// ******************************** ******************************** ************
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

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
            ret += table[i];
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

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_bufr = obj.getRawBits();
    return (*this);
}


std::ostream &operator<<(std::ostream &stream, const Fixed obj)
{
    stream << obj.toFloat();
    return (stream);
}