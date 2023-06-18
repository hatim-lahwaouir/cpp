/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:39:01 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/18 12:42:16 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef WEAPON_HPP
#define WEAPON_HPP

# include "iostream"

class Weapon
{
    std::string type;

    public:
        std::string getType();
        void        setType(std::string);

}

#endif