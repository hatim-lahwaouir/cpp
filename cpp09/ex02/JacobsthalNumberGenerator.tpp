/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   JacobsthalNumberGenerator.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:56:40 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/26 09:56:16 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JACOBSTHALNUMBERGENERATOR_HPP
#define JACOBSTHALNUMBERGENERATOR_HPP


# include "iostream"
# include "vector"

template<typename T>
class JacobsthalNumberGenerator 
{
    T _v;

    JacobsthalNumberGenerator();
    public:
        JacobsthalNumberGenerator(int N)
        {
            _v.push_back(1);
            _v.push_back(3);
            int i = 2;

            while(_v.back() <= N)
            {
                _v.push_back(_v[i - 1] + _v[i - 2] * 2);
                i++;
            }
        }
        
        JacobsthalNumberGenerator(JacobsthalNumberGenerator const &obj)
        {
            *this = obj;   
        }

        JacobsthalNumberGenerator& operator=(JacobsthalNumberGenerator const &obj)
        {
            if (this == &obj)
                return *this;
            this->_v = obj._v;
            return *this;
        }
        ~JacobsthalNumberGenerator(){};
    
        const T &getSequence() const
        {
            return this->_v;
        }
};


#endif