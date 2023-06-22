/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 00:45:37 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/22 01:36:13 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include "Weapon.hpp"

class   HumanB
{
    Weapon      *_weapon;
    std::string _name;

    public:
        HumanB(std::string);
        void    attack();
        void    setWeapon(Weapon&);
};

#endif