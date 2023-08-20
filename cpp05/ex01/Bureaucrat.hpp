/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:10:30 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/20 04:24:22 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "iostream"
#include "ExceptionClasses.hpp"

class Form;

class Bureaucrat
{
    // exceptions
    static GTH GradeTooHighException;
    static GTL GradeTooLowException;
    static DataTypeError         DataTypeError;
    private:
        const std::string   _name;
        int                 _grade;
        // check the grade
            int  validGrad(const std::string &grade);
    public:
        // constructors
            Bureaucrat();
            Bureaucrat(const Bureaucrat &);
            Bureaucrat(const std::string &name, const std::string &grade);
        // operator overloading 
            Bureaucrat &operator=(const Bureaucrat &);
            Bureaucrat operator++(int);
            Bureaucrat operator--(int);
        // geters 
            const std::string &getName() const;
            int   getGrade() const;
        // action
            void    decrement();
            void    increment();
            void    signForm(const Form &) const;
        // destructors
            ~Bureaucrat();
};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);
#endif