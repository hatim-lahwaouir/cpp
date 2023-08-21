/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:51:48 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/21 02:12:40 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

// **********************************************
// **********************************************
// *************   Constructor      *************
// **********************************************
// **********************************************

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", "5" , "25"),_target(target)
{
    
}

// **********************************************
// **********************************************
// *************      Actions       *************
// **********************************************
// **********************************************

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