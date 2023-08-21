/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:18:24 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/21 02:01:24 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    AForm *ptr[3];

    try
    {
        int i = 0;
        Bureaucrat  bre("Hatim", "2");
        Bureaucrat  bre1("Hatim", "1");
        while (i < 3)
            ptr[i++] = NULL;
        ptr[0] = new PresidentialPardonForm("Hatim");
        ptr[1] = new RobotomyRequestForm("Ilyass");
        ptr[2] = new ShrubberyCreationForm("Mehdi");
        i = 0;
        while (i < 3)
            ptr[i++]->execute(bre);        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    int i = 0;
    while (i < 0)
    {
        if (ptr[i])
            delete ptr[i];
        i++;       
    }

    std::cout << "**************************" << std::endl;

    Intern  cret;

    AForm  *ptr1 =cret.makeForm("PresidentialPardonForm", "Walid");

    delete ptr1;
}