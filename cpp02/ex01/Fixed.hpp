/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 02:03:58 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/22 11:53:28 by hlahwaou         ###   ########.fr       */
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
        Fixed   &operator = (const Fixed &obj);
        ~Fixed();
        
        Fixed(const int);
        Fixed(const float);
        
        float   toFloat(void) const;
        int     toInt(void) const;
        int     getRawBits(void) const;
        void    setRawbits(int const raw);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &obj);
#endif