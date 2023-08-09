/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:04:25 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/09 10:49:19 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma BUREAUCRAT
#include "iostream"

class GradeTooHighException : public std::exception
{
    public:
        const char *what();
};


class GradeTooLowException : public std::exception
{
    public:
        const char *what();
};


class Bureaucrat : public std::exception
{
    const std::string   _name;
    int                 _grade;
    // constructors
    public:
    static const GradeTooHighException  GradeTooHighException;
    static const GradeTooLowException   GradeTooLowException;
        Bureaucrat(std::string, int);
    const std::string &getName() const;
    int   getGrade() const;
};