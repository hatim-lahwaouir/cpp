/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 02:35:15 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/23 02:43:22 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "main.hpp"

std::string fileTobuffr(std::ifstream &in)
{
    std::string     inputBuffr = "";
    std::getline(in, inputBuffr, '\0');
    return inputBuffr;
}


void    writeTofile(std::ofstream &out, std::string &inputBuffr, std::string &s1, std::string &s2)
{
    size_t  pos;
    size_t  i;

    i = 0;
    while (i < inputBuffr.length())
    {
        pos = inputBuffr.find(s1, i);
        if (pos == std::string::npos)
        {
            while (i < inputBuffr.length())
                out << inputBuffr[i++];
            return;
        }
        while (i < pos && i < inputBuffr.length())
            out << inputBuffr[i++];
        if (pos < inputBuffr.length())
            out << s2;
        i = pos + s1.length();
    }
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Invalid arguments" << std::endl;
        return (1);
    }
    std::string     inputFile(av[1]);
    std::string     outputFile(inputFile + ".replace");
    std::string     s1(av[2]);
    std::string     s2(av[3]);
    std::string bufr;

    std::ifstream   in(inputFile, std::ifstream::in);
    if (!in.is_open())
    {
        std::cerr << "Invalid file" << std::endl;
        return (1);
    }
    std::ofstream   out(outputFile, std::ofstream::out);
    if (!out.is_open())
    {
        std::cerr << "Error in opening the file" << std::endl;
        return (in.close(), 1);
    }
    bufr = fileTobuffr(in);
    writeTofile(out, bufr,s1, s2);
    out.close();
    in.close();
}
