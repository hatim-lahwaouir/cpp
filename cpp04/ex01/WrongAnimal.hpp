/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:24:27 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/31 16:25:05 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include "iostream"

class WrongAnimal
{
    protected:
        std::string _type;
    public:
    // Orthodox canonical class form
        WrongAnimal();
        WrongAnimal(const WrongAnimal &);
        WrongAnimal  &operator =(const WrongAnimal&);
        virtual ~WrongAnimal();
    // parameterized constructor
        WrongAnimal(const std::string&);
    // virtual method
        virtual void   makeSound() const; 
    // geters
        const std::string & getType() const; 
};

#endif