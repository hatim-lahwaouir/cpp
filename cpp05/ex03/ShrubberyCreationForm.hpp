/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:04:22 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/20 23:58:15 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "iostream"
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    
    const std::string _target;
    
    // constructor
    public:
        ShrubberyCreationForm(const std::string &);
    // action
        bool    task() const;
        AForm   *clone(const std::string &) const;
};

#endif