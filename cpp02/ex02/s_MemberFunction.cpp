/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_MemberFunction.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 00:39:56 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/17 00:45:14 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed&  Fixed::min(Fixed& F1, Fixed& F2)
{
    if (F1 > F2)
        return (F2);
    return (F1);    
}

const Fixed&  Fixed::min(const Fixed& F1, const Fixed& F2)
{
    if (F1 > F2)
        return (F2);
    return (F1);
}

Fixed&  Fixed::max(Fixed& F1, Fixed& F2)
{
    if (F1 < F2)
        return (F2);
    return (F1);    
}

const Fixed&  Fixed::max(const Fixed& F1, const Fixed& F2)
{
    if (F1 < F2)
        return (F2);
    return (F1);
}