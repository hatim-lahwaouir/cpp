/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 00:05:44 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/21 02:12:01 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

# include "PresidentialPardonForm.hpp" 
# include "RobotomyRequestForm.hpp" 
# include "ShrubberyCreationForm.hpp"


// **********************************************
// **********************************************
// *************     Action      ****************
// **********************************************
// **********************************************

AForm * Intern::makeForm(const std::string &FormName, const std::string & target) const
{
    AForm *ptr[3];

    ptr[0] = new PresidentialPardonForm("X");
    ptr[1] = new RobotomyRequestForm("X");
    ptr[2] = new ShrubberyCreationForm("X");

    AForm *ret = NULL;
    for (size_t i = 0; i < 3; i++)
    {
        if (ptr[i]->getName() == FormName)
        {
            ret = ptr[i]->clone(target);
            break;
        }
    }
    for (size_t i = 0; i < 3; i++)
        delete ptr[i];
    if (ret == NULL)
    {
        std::cout << "Intern failed creating " << FormName << std::endl;
        return (NULL);
    }
    std::cout << "Intern creates " << *ret << std::endl;
    return (ret);
}

