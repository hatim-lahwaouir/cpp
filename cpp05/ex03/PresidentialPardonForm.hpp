/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:49:44 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/20 23:54:23 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

# include "iostream"
# include "AForm.hpp"


class PresidentialPardonForm : public AForm
{
    const std::string _target;
    // constructor
        public:
        PresidentialPardonForm(const std::string &);
    // action
        bool task() const;
        AForm   *clone(const std::string &target) const;
};

#endif