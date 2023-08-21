/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExceptionClasses.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:21:58 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/19 19:37:10 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ExceptionClasses.hpp"


// **********************************************
// **********************************************
// ******     The what exceptiion      **********
// **********************************************
// **********************************************

const char * GTH::what() const throw()
{
    return ("A grade is to high");
}

const char * GTL::what() const throw()
{
    return ("A grade is to low");
}

const char *DataTypeError::what() const throw()
{
    return ("There is an error in the grade out of range or it's not containing only digits");
}


// **********************************************
// **********************************************
// ************* Seters   ***********************
// **********************************************
// **********************************************

void    ProblemIdentifier::setName(const std::string &name)
{
    _name  = name;
}

void    ProblemIdentifier::setGrade(const std::string & grade)
{
    _grade  = grade;
}


// **********************************************
// **********************************************
// ******     Destructor               **********
// **********************************************
// **********************************************

ProblemIdentifier::~ProblemIdentifier() throw()
{
    
}