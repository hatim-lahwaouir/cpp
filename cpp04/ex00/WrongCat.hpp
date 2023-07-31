/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:26:49 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/31 16:27:43 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"


class   WrongCat : public WrongAnimal
{
    public:
    // Orthodox canonical class form
        WrongCat();
        WrongCat(const WrongCat &);
        WrongCat &operator =(const WrongCat&);
        ~WrongCat();
    // action
        void    makeSound() const;
};

#endif