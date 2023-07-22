/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 02:55:16 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/22 12:11:28 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    Fixed n(12);
    Fixed d(2.5f);
    std::cout << n << " * " << d << " = " << n * d << std::endl;
    std::cout << n << " / " << d << " = " << n / d << std::endl;
    std::cout << n << " - " << d << " = " << n - d << std::endl;

    Fixed e(0.55f);
    Fixed f(0.5f);
    
    std::cout << e <<  " > " << f  << std::endl;

    if (e > f)
        std::cout << "Yes" <<std::endl;
    else
        std::cout << "NO" <<std::endl;

    std::cout << e <<  " == " << f  << std::endl;
    if (e == f)
        std::cout << "Yes" <<std::endl;
    else
        std::cout << "NO" <<std::endl;

    return 0;
}