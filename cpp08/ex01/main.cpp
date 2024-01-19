/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:18:24 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/19 10:02:47 by hlahwaou         ###   ########.fr       */
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
        std::cout << "The longest span : "<< obj.longestSpan() << '\n';
        std::cout << "The shortest span : "<< obj.shortestSpan() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    obj.add_elements(v);
    try
    {
        std::cout << "The longest span : "<< obj.longestSpan() << '\n';
        std::cout << "The shortest span : "<< obj.shortestSpan() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    obj = Span(0);
    try
    {
        obj.add_elements(v);
        std::cout << "The longest span : "<< obj.longestSpan() << '\n';
        std::cout << "The shortest span : "<< obj.shortestSpan() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}   
