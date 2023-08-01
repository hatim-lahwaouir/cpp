/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:52:47 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 14:00:55 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "iostream"
#include "AMateria.hpp"

class ICharacter
{
    protected:
        std::string _name;
    // Orthodox Canonical class form
    public:
        ICharacter();
        ICharacter(const ICharacter &);
        ICharacter & operator = (const ICharacter &);
        virtual ~ICharacter();
    // parameterized constructor
        ICharacter(const std::string&);
    // geters
        virtual std::string const & getName() const = 0;
    // actions
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};
#endif