/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:31:09 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 21:43:49 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACHTER_HPP
#define CHARACHTER_HPP


#include "AMateria.hpp"
#include "ICharacter.hpp"


class   Charachter : public ICharacter, public AMateria
{
    AMateria    **_slot;
    AMateria    *_deleteIt[4];
    std::string _name;

    static int  sizeOfInventory;
    public:
    // Orthodox Canonical class form
        // constructors
            Charachter();
            Charachter(const Charachter &);
            Charachter& operator=(const Charachter &);
            Charachter(const std::string&);
        ~Charachter();
    // Geters
        std::string const & getName() const;
    // Actions
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        void delUnequipItem();
};

#endif