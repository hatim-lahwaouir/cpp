/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:48:17 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/07/31 17:00:27 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

int Brain::nbrOfIdeas = 100;

// **********************************************
// *************    Constructors ****************
// **********************************************


Brain::Brain()
{
    
    int i = Brain::nbrOfIdeas - 1;
    while (i >= 0)
    {
        _ideas[i] = "Idea";
        i -= 1;
    }
    std::cout << "Brain Default constructor" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain Copy constructor" << std::endl;
    *this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{   
    std::cout << "Copy assignment operator" << std::endl;
    int i = Brain::nbrOfIdeas - 1;

    while (i >= 0)
    {
        this->_ideas[i] = obj._ideas[i];
        i -= 1;
    }
    return (*this);
}

// **********************************************
// *************    Destructors  ****************
// **********************************************

Brain::~Brain()
{
    std::cout << "Brain Destructor" << std::endl;
}