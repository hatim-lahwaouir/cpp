/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:48:19 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/31 16:59:40 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"

class Brain
{
    static int nbrOfIdeas;
    private:
        std::string _ideas[100];
    public:
    // Orthodox canonical class form
        Brain();
        Brain(const Brain &);
        Brain & operator = (const Brain &);
        ~Brain();
};
#endif