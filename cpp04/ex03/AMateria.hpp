/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:30:57 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 15:57:21 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "iostream"
#include "ICharacter.hpp"

class   AMateria
{

    protected:
        std::string _type;
    public:
            AMateria(std::string const &);
        // Orthodox Canonical class form
            AMateria();
            AMateria(const AMateria &);
            AMateria &operator=(const AMateria &);
            virtual ~AMateria();
        // geters
            std::string const & getType() const;
            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target);
};

#endif