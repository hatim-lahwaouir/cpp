/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:15:25 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/21 01:49:20 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "iostream"
# include "AForm.hpp"
# include "cstdlib"

class RobotomyRequestForm : public AForm
{
    const std::string  _target;
    // constructor
    public:
        RobotomyRequestForm(const std::string &);
    // action
        bool    task() const;
        AForm   *clone(const std::string &target) const;    
};


#endif