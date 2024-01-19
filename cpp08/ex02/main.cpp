/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:20:58 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/19 10:08:38 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list"
#include "iostream"
#include "MutantStack.hpp"

int main()
{
    std::list<int> mstack2;
    mstack2.push_back(5);
    mstack2.push_back(17);
    std::cout << "list : ";
    for (std::list<int>::iterator it = mstack2.begin(); it != mstack2.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";


    std::cout << "Const MutanStack : ";
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    MutantStack<int> mstack1 (mstack); 
    for (MutantStack<int>::const_iterator it = mstack1.begin(); it != mstack1.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    std::cout << "MutanStack : ";
    for (MutantStack<int>::const_iterator it = mstack.begin(); it != mstack.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    return 0;
}

