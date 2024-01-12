/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:18:24 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/12 14:44:41 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Span.hpp"


int main()
{
    Span obj(10);
    int arr[] = {1,10,20,30,40,1};

    for (int i = 0; i < (int)sizeof(arr) / 4; i++)
    {
        obj.addNumber(arr[i]);
    }

    std::cout << obj.longestSpan() << '\n';
    std::cout << obj.shortestSpan() << "\n";
}
