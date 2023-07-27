/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:59:43 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/27 12:16:40 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
{
    public:
    // constructors
        FragTrap();
        FragTrap(const FragTrap &);
        FragTrap & operator=(const FragTrap&);
        FragTrap(const std::string&);
    // action
        void highFivesGuys(void) const;
        void attack(const std::string &);
    // destructor
        ~FragTrap();
};

#endif
