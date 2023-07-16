/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operatorOverload.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:38:25 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/17 00:56:36 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void    Fixed::operator=(const Fixed &obj) { this->_bufr = obj.getRawBits();    }

bool    Fixed::operator==(const Fixed &obj) const
{
    return (this->_bufr == obj._bufr);
}

bool    Fixed::operator!=(const Fixed &obj) const
{
    return (this->_bufr != obj._bufr);
}

bool    Fixed::operator<=(const Fixed &obj) const 
{
    char    fracPart1 = this->_bufr;
    char    fracPart2 = obj._bufr;
    
    if (obj == *this)
        return (1);
    if ((this->_bufr >> 8) < (obj.getRawBits() >> 8))
        return (1);
    else if ((this->_bufr >> 8) > (obj.getRawBits() >> 8))
        return (0);

    if  (fracPart1 < fracPart2)
        return (1);
    return (0);
}

bool    Fixed::operator<(const Fixed &obj) const 
{
    char    fracPart1 = this->_bufr;
    char    fracPart2 = obj._bufr;
    
    if ((this->_bufr >> 8) < (obj.getRawBits() >> 8))
        return (1);
    else if ((this->_bufr >> 8) > (obj.getRawBits() >> 8))
        return (0);

    if  (fracPart1 < fracPart2)
        return (1);
    return (0);
}


bool    Fixed::operator>=(const Fixed &obj) const 
{
    char    fracPart1 = this->_bufr;
    char    fracPart2 = obj._bufr;
    
    if (obj == *this)
        return (1);
    if ((this->_bufr >> 8) > (obj.getRawBits() >> 8))
        return (1);
    else if ((this->_bufr >> 8) < (obj.getRawBits() >> 8))
        return (0);

    if  (fracPart1 > fracPart2)
        return (1);
    return (0);
}

bool    Fixed::operator>(const Fixed &obj) const 
{
    char    fracPart1 = this->_bufr;
    char    fracPart2 = obj._bufr;
    
    if ((this->_bufr >> 8) > (obj.getRawBits() >> 8))
        return (1);
    else if ((this->_bufr >> 8) < (obj.getRawBits() >> 8))
        return (0);

    if  (fracPart1 > fracPart2)
        return (1);
    return (0);
}

Fixed   Fixed::operator +(const Fixed &obj)
{
    Fixed ret;

    ret._bufr = obj.getRawBits() + this->getRawBits(); 
    return (ret);
}

Fixed   Fixed::operator -(const Fixed &obj)
{
    Fixed ret;

    ret._bufr = this->getRawBits() - obj.getRawBits();
    return (ret);
}

Fixed   Fixed::operator *(const Fixed &obj)
{
    int f = ((float)(this->_bufr * obj._bufr) / 256);    
    
    Fixed ret;
    ret.setRawbits(f);
    return (ret);
}


Fixed   Fixed::operator / (const Fixed &obj)
{
    int f = (((float)this->_bufr / obj._bufr ) * 256);    
    
    Fixed ret;
    ret.setRawbits(f);
    return (ret);
}


Fixed   Fixed::operator++(int)
{
    Fixed   tmp;

    tmp = *this;
    this->_bufr += 1;
    return (tmp);
}

Fixed   Fixed::operator++(void)
{
    this->_bufr += 1;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed   tmp;

    tmp = *this;
    this->_bufr -= 1;
    return (tmp);
}

Fixed   Fixed::operator--(void)
{
    this->_bufr -= 1;
    return (*this);
}
