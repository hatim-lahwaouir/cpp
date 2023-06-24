/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 05:32:33 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/24 17:34:43 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HARL_HPP
#define HARL_HPP

# include "iostream"

#endif

class Harl
{
    void        debug(void);
    void        info(void);
    void        warning(void);
    void        error(void);

    std::string _comments[4];
    void    (Harl::*ptr[4])(void);
    public:
    void complain( std::string level);
    Harl();
};
