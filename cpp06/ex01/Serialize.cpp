/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:08:40 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/11/05 01:10:22 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"


Serialize::Serialize(){};


uintptr_t Serialize::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}


Data* Serialize::deserialize(uintptr_t raw)
{

    return (reinterpret_cast<Data *>(raw));
}


