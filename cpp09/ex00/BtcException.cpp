/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BtcException.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:33:53 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/23 08:52:03 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BtcException.hpp"


// ********************** Exceptions **************************

// Error orthod....
const char * Error::what() const throw()
{
    return (errfr.c_str());
}

Error::~Error() throw() {};

Error::Error() throw() : std::exception()
{
    
}

Error::Error(const std::string &err) throw() : std::exception()
{    
    this->errfr = "Error: " + err;
}

Error::Error(const Error &obj) throw() : std::exception(obj)
{
    *this = obj;
    
}

Error&  Error::operator=(Error const &obj) throw()
{
    if (this == &obj)
        return *this;
    this->errfr = obj.errfr;
    return *this;  
}

