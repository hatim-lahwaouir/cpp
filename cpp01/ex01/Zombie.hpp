/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:47:18 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/25 19:22:38 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include "iostream"


  

class   Zombie
{
    std::string _name;

    public:
        void announce( void ) const;
        void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif