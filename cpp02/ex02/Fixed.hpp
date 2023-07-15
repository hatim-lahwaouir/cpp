/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 02:03:58 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/15 23:18:48 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"

class Fixed
{
    private:
        int64_t _bufr;
    static const int sizeFractionalBits;

    public:
        Fixed();
        Fixed(const Fixed &obj);
        Fixed(const int);
        Fixed(const float);
        
        ~Fixed();
        float   toFloat(void) const;
        int     toInt(void) const;
        int     getRawBits(void) const;
        void    setRawbits(int const raw);
        // operator oveloading
            // comparision operators
                void    operator = (const Fixed &obj);
                bool    operator > (const Fixed &obj) const;
                bool    operator >= (const Fixed &obj) const;;
                bool    operator < (const Fixed &obj) const;
                bool    operator<=(const Fixed &obj) const;
                bool    operator == (const Fixed &obj) const;
                bool    operator != (const Fixed &obj) const;
            // arithmetic operators
                Fixed   operator +(const Fixed &obj);
                Fixed   operator -(const Fixed &obj);
                Fixed   operator *(const Fixed &obj);
                Fixed   operator /(const Fixed &obj);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &obj);
#endif