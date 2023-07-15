/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 02:55:16 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/15 07:37:14 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
int main( void ) {
    Fixed a(1234.4321f);
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    // a = Fixed( 1234.4321f );
    // std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b.toFloat() << std::endl;
    std::cout << "c is " << c.toFloat() << std::endl;
    std::cout << "d is " << a.toFloat() << std::endl;
    // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}