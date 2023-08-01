/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:40:50 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 16:07:49 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class   Ice : public AMateria
{
    // Orthodox Canonical class form
        Ice();
        Ice(const Ice&);
        Ice& operator=(const Ice &);
        ~Ice();
    // Actions
        AMateria    *clone() const;
        void        use(ICharacter &target);
};

#endif