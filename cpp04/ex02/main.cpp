/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:37:42 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/01 11:32:42 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02.hpp"


void    f()
{
    system("leaks ex02");
}
int main()
{
    size_t size = 10;
    // AAnimal  hatim;
    AAnimal** arrAnimals = new AAnimal* [size];

    for (size_t i = 0; i < size; i++)
    {
        if (i < size / 2)
            arrAnimals[i] = new Dog();
        else
            arrAnimals[i] = new Cat();
    }

    for (size_t i = 0; i < size; i++)
    {
        if (i < size / 2)
            delete arrAnimals[i];
        else
            delete arrAnimals[i];
    }
    delete [] arrAnimals;
    Cat obj1;
    Cat obj2;

    obj1 = obj2;

    obj1.print();
    obj2.print();

    Dog *obj01 = new Dog();
    Dog obj02 = *obj01;

    (*obj01).print();
    obj02.print();

    delete obj01;
    return (0);
}