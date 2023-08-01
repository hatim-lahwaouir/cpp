/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:42:21 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 21:48:05 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int Charachter::sizeOfInventory = 4;


// **********************************************
// *************    Constructors ****************
// **********************************************

Charachter::Charachter()
{
    _slot = new  AMateria* [Charachter::sizeOfInventory];

    _name = "X";
    int i = Charachter::sizeOfInventory - 1;
    while (i >= 0)
    {
        _slot[i] = NULL;
        _deleteIt[i] = NULL;
        i -= 1;
    }
}

Charachter::Charachter(const std::string &name)
{
    _slot = new  AMateria* [Charachter::sizeOfInventory];

    _name = name;
    int i = Charachter::sizeOfInventory - 1;
    while (i >= 0)
    {
        _slot[i] = NULL;
        _deleteIt[i] = NULL;
        i -= 1;
    }
}

Charachter::Charachter(const Charachter &obj)
{
    _name = obj._name;

    int i = Charachter::sizeOfInventory - 1;
    while (i >= 0)
    {
        if (obj._slot[i])
            _slot[i] = obj._slot[i]->clone();
        i += 1;
    }
}

Charachter &Charachter::operator=(const Charachter &obj)
{
    _name = obj._name;
    int i = Charachter::sizeOfInventory - 1;
    while (i >= 0)
    {
        if (obj._slot[i])
            _slot[i] = obj._slot[i]->clone();
        i += 1;
    }
    return (*this);
}
// **********************************************
// *************    Destructor      *************
// **********************************************

Charachter::~Charachter()
{
    int i = Charachter::sizeOfInventory - 1;
    while (i >= 0)
    {
        if (_slot[i])
            delete _slot[i];
        if (_deleteIt[i])
            delete _deleteIt[i];
        i -= 1;
    }
    delete [] _slot;
    delete [] _deleteIt;
}

// **********************************************
// *************    Actions      ****************
// **********************************************

void    Charachter::delUnequipItem()
{
    int i = 0;

    while (i < Charachter::sizeOfInventory)
    {
        if (_deleteIt[i])
        {
            delete _deleteIt[i];
            _deleteIt[i] = NULL;
        }
        i += 1;
    }   
}

void    Charachter::equip(AMateria *m)
{
    int i = 0;
    // delete unequip Item
    delUnequipItem();
    while (i < Charachter::sizeOfInventory)
    {
        if (!_slot[i])
        {
            _slot[i] = m->clone();
            break;
        }
        i += 1;
    }   
}

void    Charachter::unequip(int idx)
{
    if (idx > Charachter::sizeOfInventory)
        return ;
    int i = 0;

    if (!_slot[idx])
        return ;
    while (i < Charachter::sizeOfInventory)
    {
        if (!_deleteIt[i])
        {
            _deleteIt[i] = _slot[idx];
            _slot[idx] = NULL;
            break;
        }
        i += 1;
    }
}

void    Charachter::use(int idx, ICharacter &target)
{
    // delete unequip Item
    delUnequipItem();
    
    if (idx > Charachter::sizeOfInventory)
        return;
    if (_slot[idx])
        (*_slot[idx]).use(target);
}