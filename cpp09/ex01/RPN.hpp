/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:07:48 by hlahwaou          #+#    #+#             */
/*   Updated: 2024/01/23 11:20:38 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

# include "stack"
# include "iostream"
# include "sstream"


class RPN
{
    std::string _s;

    public:
    
    static std::string trim(std::string);
    // validation of the input
        bool input_validation() const;
    // working on the format
        float rpn();
        RPN();    
        RPN(std::string );
        RPN(const RPN &obj);
        RPN &operator=(const RPN&);
        ~RPN();
};


class Error :public std::exception
{
    std::string errfr; 
    public:
    const char *what() const throw();
    Error() throw();
    Error(const std::string &) throw();
    Error(const Error &) throw();
    Error& operator=(Error const &) throw();
    ~Error() throw();
};

#endif
