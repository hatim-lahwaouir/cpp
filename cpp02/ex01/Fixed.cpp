/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 02:03:50 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/15 05:30:12 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::sizeFractionalBits = 8;

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
    int     n;
    float   tmp;
    float   table[8] = {0.5, 0.25, 0.125, 0.0625, 0.03125 ,0.015625, 0.0078125, 0.00390625};

    n = (int)nbr;
    tmp = nbr - (float)n;
    this->_bufr = (n << 8);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_bufr);
}

void    Fixed::setRawbits(int const raw)
{
    this->_bufr  = raw;
}

void    Fixed::operator=(Fixed &obj)
{
     std::cout << "Copy assignment operator called" << std::endl;
    this->_bufr = obj.getRawBits();
}

