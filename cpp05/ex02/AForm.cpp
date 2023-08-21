/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 20:50:38 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/20 14:37:17 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ExceptionClasses.hpp"
#include "Bureaucrat.hpp"

GTH AForm::GradeTooHighException;
GTL AForm::GradeTooLowException;
DataTypeError AForm::DataTypeError;

// **********************************************
// **********************************************
// *************   Constructors     *************
// **********************************************
// **********************************************

AForm::AForm() : _name("X"), _gradeRToExecute(1), _gradeRToSigned(1)
{
    _signed = false;
}

AForm::AForm(const AForm &obj) : _name(obj._name), _gradeRToExecute(obj._gradeRToExecute), _gradeRToSigned(obj._gradeRToSigned)
{
    _signed = obj._signed;
}

AForm::AForm(const std::string &name, const std::string &gradeRToExecute, const std::string &gradeRTsigned) : _name(name), _gradeRToExecute(validGrad(gradeRToExecute)), _gradeRToSigned(validGrad(gradeRTsigned))
{
    _signed = false;
}

// **********************************************
// **********************************************
// ******   operator overloading       **********
// **********************************************
// **********************************************
AForm &AForm::operator=(const AForm &obj)
{
    _signed = obj._signed;
    return (*this);
}

std::ostream &operator<<(std::ostream &cout, const AForm &obj)
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

AForm::~AForm()
{
}


// **********************************************
// **********************************************
// ***************   Geters      ****************
// **********************************************
// **********************************************

bool AForm::getSigned() const
{
    return (_signed);
}

const std::string &AForm::getName() const
{
    return (_name);
}

int AForm::getGradeRToExecute() const
{
    return (_gradeRToExecute);
}

int AForm::getGradeRToSigned() const
{
    return (_gradeRToSigned);
}

// **********************************************
// **********************************************
// ***************   Actions     ****************
// **********************************************
// **********************************************

void    AForm::beSigned(const Bureaucrat &bur)
{
    if (bur.getGrade() <= this->getGradeRToSigned())
    {
        _signed = true;
        bur.signForm(*this);
        return;
    }
    bur.signForm(*this);
    throw AForm::GradeTooLowException;
}

void    AForm::execute(Bureaucrat const &executor) const
{
    if (_gradeRToExecute >= executor.getGrade())
    {
        this->task();
        executor.executeForm(*this);
        return;
    }
    throw AForm::GradeTooLowException;
}

// **********************************************
// **********************************************
// ******   Checking the Grade         **********
// **********************************************
// **********************************************

int AForm::validGrad(const std::string & grade)
{
    const char *ptr = grade.c_str();
    size_t  i;
    int     ret = 0;

    i = 0;
    while (ptr[i] == ' ' && ptr[i])
        i++;
    if (ptr[i] == '-')
        throw AForm::DataTypeError;
    while (isdigit(ptr[i]) && ptr[i])
    {
        ret = ret * 10 + ptr[i] - '0';
        if (ret > 150)
           throw AForm::GradeTooLowException;
        i++;
    }
    while (ptr[i])
    {
        if (!isdigit(ptr[i]))
            throw AForm::DataTypeError;
        i++;
    }

    if (ret < 1)
            throw AForm::GradeTooHighException;
    return (ret);
}