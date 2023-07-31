/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:18:09 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/31 16:01:16 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include "iostream"

class Animal
{
    protected:
        std::string _type;
    public:
    // Orthodox canonical class form
        Animal();
        Animal(const Animal &);
        Animal  &operator =(const Animal&);
        virtual ~Animal();
    // parameterized constructor
        Animal(const std::string&);
    // virtual method
        virtual void   makeSound() const; 
    // geters
        const std::string & getType() const; 
};

#endif