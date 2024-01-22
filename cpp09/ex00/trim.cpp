/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:44:15 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/22 15:50:04 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"


std::string trim(std::string s)
{
    size_t start = 0;
    while (start < s.size() && s[start] == ' ')
        start += 1;
    
    int end = s.size() - 1;

    while (end > 0 && s[end] == ' ')
        end--;

    return (s.substr(start, end - start + 1));

}
