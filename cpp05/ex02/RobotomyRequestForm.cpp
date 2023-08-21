/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:17:50 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/20 22:18:01 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("RobotomyRequestForm", "45", "72") , _target(target)
{
    
}


bool    RobotomyRequestForm::task() const
{
    int N;

    std::srand(time(0));
    N = std::rand() % 100 + 1;
    std::cout << "NOISES!!!!" << std::endl;
    std::cout << "NOISES!!!!" << std::endl;
    if (N % 2 == 0)
        std::cout << this->getName() << " the " << _target << " has been robotomized successfully" << std::endl;    
    else
        std::cout << this->getName() << " the " << _target << " robotomized failed" << std::endl;           
    return (true);
}