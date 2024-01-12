/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:18:24 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/12 15:59:57 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Span.hpp"


int main()
{
    Span obj(10);
    int arr[] = {1,10,20,30,40,1};

    std::vector<int> v(arr, arr + 6);

    try
    {
        std::cout << obj.longestSpan() << '\n';
        std::cout << obj.shortestSpan() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}   
