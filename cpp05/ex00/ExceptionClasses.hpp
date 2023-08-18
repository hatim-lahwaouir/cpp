/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExceptionClasses.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:21:08 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/18 16:27:24 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTIONCLASSES_HPP
#define EXCEPTIONCLASSES_HPP

# include "iostream"

class ProblemIdentifier : public std::exception
{
    protected:
        std::string _name;
        std::string _grade;
        void    setName(const std::string &);
        void    setGrade(const std::string &);
        ~ProblemIdentifier() throw();
};

class DataTypeError : public ProblemIdentifier
{
    public:
        const char *what() const throw();
};

class GradeTooHighException : public ProblemIdentifier
{
    public:
        const char *what() const throw();
};

class GradeTooLowException : public ProblemIdentifier
{
    public:
        const char *what() const throw();
};

#endif