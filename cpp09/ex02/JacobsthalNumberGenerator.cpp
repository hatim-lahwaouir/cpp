/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   JacobsthalNumberGenerator.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:58:38 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/25 10:00:49 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "JacobsthalNumberGenerator.hpp"

JacobsthalNumberGenerator::JacobsthalNumberGenerator(size_t N)
{
    _v.push_back(1);
    _v.push_back(1);

    for (size_t i = 2; i <= N; i++)
    {
        _v[i] = _v[i - 1] + _v[i - 2] * 2;
    }
}

JacobsthalNumberGenerator::JacobsthalNumberGenerator(const JacobsthalNumberGenerator &obj)
{
    *this = obj;   
}

JacobsthalNumberGenerator& JacobsthalNumberGenerator::operator=(const JacobsthalNumberGenerator &obj)
{
    if (this == &obj)
        return *this;
    this->_v = obj._v;
    return *this;
}

JacobsthalNumberGenerator::~JacobsthalNumberGenerator() {}

const std::vector<int> &JacobsthalNumberGenerator::getSequence() const
{
    return this->_v;    
}