/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:59:43 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/26 14:57:51 by hlahwaou         ###   ########.fr       */
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
    // destructor
        ~FragTrap();
};

#endif
