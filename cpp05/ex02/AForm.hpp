/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 20:39:30 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/20 23:25:27 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "iostream"
#include "fstream"
class GTH;
class GTL;
class DataTypeError;
class Bureaucrat;

class AForm
{
    static GTH GradeTooHighException;
    static GTL GradeTooLowException;
    static DataTypeError         DataTypeError;
    private:
        const std::string _name;
        bool              _signed;
        const int         _gradeRToExecute;
        const int         _gradeRToSigned;
        virtual bool    task() const = 0;
    public:
    // constructors
        AForm();
        AForm(const AForm &);
    // operator overloading
        AForm &operator=(const AForm &);
        AForm(const std::string &name, const std::string &gradeRToExecute, const std::string &gradeRTsigned);
    // check the grade
        int  validGrad(const std::string &grade);
    // geters
        bool                getSigned() const;
        const std::string   &getName() const;
        int                 getGradeRToExecute() const;
        int                 getGradeRToSigned() const;
    // actions
        void            beSigned(const Bureaucrat&);
        void            execute(Bureaucrat const &executor) const;
    // destructor
        virtual ~AForm();
};

std::ostream &operator<<(std::ostream &cout, const AForm &obj);
#endif