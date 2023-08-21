/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:51:48 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/20 23:58:35 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", "5" , "25"),_target(target)
{
    
}

bool PresidentialPardonForm::task() const
{
    std::cout << _target << " was pardoned by Zaphod Beeblebrox" << std::endl;
    
    return (true);
}

AForm *PresidentialPardonForm::clone(const std::string &target) const
{
    AForm *ptr = new PresidentialPardonForm(target);

    return (ptr);
}