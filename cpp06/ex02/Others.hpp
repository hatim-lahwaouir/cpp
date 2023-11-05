/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Others.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:08:52 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/11/05 01:08:53 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTHERS_HPP
#define OTHERS_HPP

# include "iostream"
# include "Base.hpp"

class A : public Base
{
    public:
        A();
        ~A();
};


// Base *ptr=  A()
// (B)*ptr;

class B : public Base
{
    public:
        B();
        ~B();
};

class C : public Base
{
    public:
        C();
        ~C();
};

#endif