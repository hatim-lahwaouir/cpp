/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:37:14 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 16:00:31 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class   Cure : public AMateria
{
    // Orthodox Canonical class form
        Cure();
        Cure(const Cure&);
        Cure& operator=(const Cure &);
        AMateria    *clone()const;
        void        use(ICharacter& target);
        ~Cure(); 
};

#endif