/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:39:32 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/09 14:00:15 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int main()
{
    int a =  1, b  = 2;
    float a1 =  1.5, b1  = 2.5;
    double  a2 =  1.75, b2  = 2.75;
    std::string  a3 =  "a", b3  = "b";



    std::cout << "a: " << a << ", b: " << b << "\n";
    swap(a,b);
    std::cout << "after swap\n";
    std::cout << "a: " << a << ", b: " << b << "\n";
   
    std::cout << "a1: " << a1 << ", b1: " << b1 << "\n";
    swap(a1,b1);
    std::cout << "after swap\n";
    std::cout << "a1: " << a1 << ", b1: " << b1 << "\n";
   
    std::cout << "a2: " << a2 << ", b2: " << b2 << "\n";
    swap(a2,b2);
    std::cout << "after swap\n";
    std::cout << "a2: " << a2 << ", b2: " << b2 << "\n";
   
    std::cout << "a3: " << a3 << ", b3: " << b3 << "\n";
    swap(a3,b3);
    std::cout << "after swap\n";
    std::cout << "a3: " << a3 << ", b3: " << b3 << "\n";
    


    std::cout << "Max(12,31) Max(1.5,12.130)\n";
    std::cout << max<int>(12,31) << " " << max<float>(1.5,12.130) << "\n";
    std::cout << "Min(12,31) and Min(1.5,12.130)\n";
    std::cout << min<int>(12,31) << " " << min<float>(1.5,12.130) << "\n";

}