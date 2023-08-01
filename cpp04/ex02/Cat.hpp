/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:35:53 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 11:16:45 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include "AAnimal.hpp"


class   Cat : public AAnimal
{
    public:
    // Orthodox canonical class form
        Cat();
        Cat(const Cat &);
        Cat &operator =(const Cat&);
        ~Cat();
    // action
        void    makeSound() const;
};

#endif