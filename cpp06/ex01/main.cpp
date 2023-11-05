/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:10:24 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/11/05 01:10:32 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serialize.hpp"


int main()
{
    Data t1;

    Data *ptr = &t1;

    std::cout << "->"<< ptr << std::endl;

    uintptr_t addrValue = Serialize::serialize(ptr); 
    std::cout << "=>"<< addrValue << std::endl;

    std::cout << "->" <<  Serialize::deserialize(addrValue) << std::endl;
}
