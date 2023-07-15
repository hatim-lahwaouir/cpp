/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 02:03:50 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/15 04:50:36 by hlahwaou         ###   ########.fr       */
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
