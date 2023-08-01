/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:18:09 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 11:13:03 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AANIMAL_HPP
#define AANIMAL_HPP

# include "iostream"
# include "Brain.hpp"
class AAnimal
{
    protected:
        std::string _type;
        Brain       *_myBrain;
    public:
    // Orthodox canonical class form
        AAnimal();
        AAnimal(const AAnimal &);
        AAnimal  &operator =(const AAnimal&);
        virtual ~AAnimal();
    // parameterized constructor
        AAnimal(const std::string&);
    // virtual method
        virtual void   makeSound() const = 0; 
    // geters
        const std::string & getType() const; 
    // print address of _myBrain
        void  print() const;
};

#endif