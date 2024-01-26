/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:47:18 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/26 08:59:25 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithm"
#include "vector"

#include "PmergeMe.hpp"

#include "iostream"


int main()
{
    int arr[] = {5,1,2,4,6,1,72,52,-12};
    
    std::vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));


    PmergeMe obj(v.begin() ,v.end());
    obj.pmerge();
}