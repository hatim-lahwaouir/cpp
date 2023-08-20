/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 20:50:38 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/20 04:31:03 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ExceptionClasses.hpp"
#include "Bureaucrat.hpp"

GTH Form::GradeTooHighException;
GTL Form::GradeTooLowException;
DataTypeError Form::DataTypeError;

// **********************************************
// **********************************************
// *************   Constructors     *************
// **********************************************
// **********************************************

Form::Form() : _name("X"), _gradeRToExecute(1), _gradeRToSigned(1)
{
    _signed = false;
}

Form::Form(const Form &obj) : _name(obj._name), _gradeRToExecute(obj._gradeRToExecute), _gradeRToSigned(obj._gradeRToSigned)
{
    _signed = obj._signed;
}

Form::Form(const std::string &name, const std::string &gradeRToExecute, const std::string &gradeRTsigned) : _name(name), _gradeRToExecute(validGrad(gradeRToExecute)), _gradeRToSigned(validGrad(gradeRTsigned))
{
    _signed = false;
}

// **********************************************
// **********************************************
// ******   operator overloading       **********
// **********************************************
// **********************************************

Form &Form::operator=(const Form &obj)
{
    _signed = obj._signed;
    return (*this);
}

std::ostream &operator<<(std::ostream &cout, const Form &obj)
{
    cout << "The form '"<< obj.getName() << "', to sign it you must be at " << obj.getGradeRToSigned() << " grade or higher, and to excute it you must be at " << obj.getGradeRToExecute() << " grade or higher, ";
    cout << "And this form is ";
    if (obj.getSigned())
        cout << "signed";
    else
        cout << "not signed";
    return (cout);
}

// **********************************************
// **********************************************
// *************   Destructor      *************
// **********************************************
// **********************************************

Form::~Form()
{
}


// **********************************************
// **********************************************
// ***************   Geters      ****************
// **********************************************
// **********************************************

bool Form::getSigned() const
{
    return (_signed);
}

const std::string &Form::getName() const
{
    return (_name);
}

int Form::getGradeRToExecute() const
{
    return (_gradeRToExecute);
}

int Form::getGradeRToSigned() const
{
    return (_gradeRToSigned);
}

// **********************************************
// **********************************************
// ***************   Actions     ****************
// **********************************************
// **********************************************

void    Form::beSigned(const Bureaucrat &bur)
{
    if (bur.getGrade() <= this->getGradeRToSigned())
    {
        _signed = true;
        bur.signForm(*this);
        return;
    }
    throw Form::GradeTooLowException;
}


// **********************************************
// **********************************************
// ******   Checking the Grade         **********
// **********************************************
// **********************************************

int Form::validGrad(const std::string & grade)
{
    const char *ptr = grade.c_str();
    size_t  i;
    int     ret = 0;

    i = 0;
    while (ptr[i] == ' ' && ptr[i])
        i++;
    if (ptr[i] == '-')
        throw Form::DataTypeError;
    while (isdigit(ptr[i]) && ptr[i])
    {
        ret = ret * 10 + ptr[i] - '0';
        if (ret > 150)
           throw Form::GradeTooLowException;
        i++;
    }
    while (ptr[i])
    {
        if (!isdigit(ptr[i]))
            throw Form::DataTypeError;
        i++;
    }

    if (ret < 1)
            throw Form::GradeTooHighException;
    return (ret);
}