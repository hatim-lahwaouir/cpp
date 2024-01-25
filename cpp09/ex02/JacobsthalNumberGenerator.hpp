/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   JacobsthalNumberGenerator.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 08:56:40 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/25 10:00:39 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JACOBSTHALNUMBERGENERATOR_HPP
#define JACOBSTHALNUMBERGENERATOR_HPP


# include "iostream"
# include "vector"

class JacobsthalNumberGenerator
{
    std::vector<int> _v;

    JacobsthalNumberGenerator();
    public:
        JacobsthalNumberGenerator(size_t N);
        JacobsthalNumberGenerator(JacobsthalNumberGenerator const &);
        JacobsthalNumberGenerator& operator=(JacobsthalNumberGenerator const &);
        ~JacobsthalNumberGenerator();
    
        const std::vector<int> &getSequence() const;
};


#endif