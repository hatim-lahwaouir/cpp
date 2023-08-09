/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:35:19 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/09 10:51:10 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const GradeTooHighException Bureaucrat::GradeTooHighException;;
const GradeTooLowException Bureaucrat::GradeTooLowException;

// **********************************************
// ******* Exeptions Message         ************
// **********************************************

const char *GradeTooHighException::what()
{
    return ("Grade is too hight");
}

const char *GradeTooLowException::what()
{
    return ("Grade is too low");
}

// **********************************************
// *************    Constructors ****************
// **********************************************

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException;

    _grade = grade;
    
}


// **********************************************
// *************  Geters & Seters ***************
// **********************************************

const std::string &Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

