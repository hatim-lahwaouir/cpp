/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:08:29 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/11/05 01:08:30 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"


// remove the f for float numbers

void    ScalarConverte::removef(std::string &rep)
{
    size_t fIndex = rep.find("f");

    if (fIndex != std::string::npos && fIndex > 0 && isdigit(rep[fIndex - 1]))
        rep.erase(fIndex, 1);
}

// trim function
std::string ScalarConverte::ft_trim(const std::string oldrep)
{
    std::string newrep = oldrep;
    size_t startspaces = 0;
    int end;

    // counting the start spaces that the string start with and erasing them
    while (newrep[startspaces] && newrep[startspaces] == ' ')
        startspaces++;
    newrep.erase(0, startspaces);

    end = newrep.size();

    // if the string only spaces
    if (!end)
        return newrep;
    end -= 1;

    // now counting from the back and erasing them
    while (end > 0 && newrep[end] == ' ')
        end--;

    if (end != (int)newrep.size() - 1)
        newrep.erase(end + 1, std::string::npos);
    
    return (newrep);
}

// checking on nbr

bool    ScalarConverte::NbrGoodRep(const std::string &rep)
{
    size_t i = 0;

    // if we got an empty string
    if (!rep[i])
        return (false);

    // checking the sign
    if (rep[i] == '-' || rep[i] == '+')
        i++;

    // escaping the digits
    for (; rep[i] && isdigit(rep[i]); i++)
        ;
    
    // if it's only containning digits 
    if (!rep[i])
        return (true);
    
    // checking if there is a frac part
    if (rep[i] != '.')
        return (false);
    i++;

    // escaping all the digits;
    for (; rep[i] && isdigit(rep[i]); i++)
        ;
    
    // if we reach the end that the format is correct else no
    if (!rep[i])
    {
        return (true);
    }
    if (rep[i] == 'f' && rep[i + 1] == '\0')
        return (true);
    

    return (false);
}

// is pseuado rep

bool    ScalarConverte::isPseudo(const std::string &rep)
{

    for (size_t i = 0; i < 6; i++)
    {
        if (ScalarConverte::pseudoElements[i] == rep)
            return (true);
    }
    return (false);
}

bool ScalarConverte::isFloatPseudo(const std::string &rep)
{

    std::string arr[]  = {"-inff", "+inff", "nanf"};

    for (size_t i = 0; i < 3; i++)
    {
        if (arr[i] == rep)
            return (true);        
    }
    return (false);
}
// static cast -> it performs at compile time
// it's used for conversions that are considered safe by the compiler
// static_cast are checked by the compiler not like c cast style

void        ScalarConverte::handlingPseudo(std::string &rep)
{
    // if is a float rep
    if (isFloatPseudo(rep))
    {
        float nbr = std::atof(rep.c_str());
        if (rep == "nanf")
            std::cout << "char :" << "impossible" <<"\n";
        else
            std::cout << "char :" << "Non displayable" <<"\n";
    
        std::cout << "int :" << static_cast<int>(nbr)<< "\n";
        std::cout << "float :" << (nbr)<< "\n";
        std::cout << "double :" <<  static_cast<double>(nbr)<<"\n";
    }
    // double representation
    else
    {
        rep += "f";
        float nbr = std::atof(rep.c_str());
        if (rep == "nanf")
            std::cout << "char :" << "impossible" <<"\n";
        else
            std::cout << "char :" << "Non displayable" <<"\n";
        std::cout << "int :" << static_cast<int>(nbr)<< "\n";
        std::cout << "float :" << (nbr)<< "\n";
        std::cout << "double :" <<  static_cast<double>(nbr)<<"\n";
    }
}
