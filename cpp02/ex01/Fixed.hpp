/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 02:03:58 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/15 05:26:43 by hlahwaou         ###   ########.fr       */
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
        Fixed(Fixed const &obj);
        Fixed(const int);
        Fixed(const float);
        ~Fixed();
        void  operator=(Fixed &obj);
        int   getRawBits(void) const;
        void  setRawbits(int const raw);
};

#endif