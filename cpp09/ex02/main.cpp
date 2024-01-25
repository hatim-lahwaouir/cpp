/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:47:18 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/25 09:30:59 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithm"
#include "vector"

#include "iostream"


int main()
{
    std::vector<int> v;
    
    for (int i = 0; i < 10; i++){
        v.push_back(i);
        std::cout << i << " ";
    }
    std::cout << "\n";
    std::vector<int>::iterator it  =(std::lower_bound(v.begin(), v.end(), 0));
    if (it == v.end())
        std::cout << "push_back";
    else
        std::cout << *it << "\n";
}