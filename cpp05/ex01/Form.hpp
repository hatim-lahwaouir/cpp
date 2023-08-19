/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 20:39:30 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/19 19:54:20 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "iostream"

class GTH;
class GTL;
class DataTypeError;

class Form
{
    static GTH GradeTooHighException;
    static GTL GradeTooLowException;
    static DataTypeError         DataTypeError;
    private:
        const std::string _name;
        bool              _signed;
        const int         _gradeRToExecute;
        const int         _gradeRToSigned;
    public:
    // constructors
        Form();
        Form(const Form &);
    // operator overloading
        Form &operator=(const Form &);
        Form(const std::string &name, const std::string &gradeRToExecute, const std::string &gradeRTsigned);
    // check the grade
        int  validGrad(const std::string &grade);
    // geters
        bool                getSigned() const;
        const std::string   &getName() const;
        int                 getGradeRToExecute() const;
        int                 getGradeRToSigned() const;
    // destructor
        ~Form();
};

std::ostream &operator<<(std::ostream &cout, const Form &obj);
#endif