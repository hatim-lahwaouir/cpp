/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:12:36 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/08/21 02:13:37 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


// **********************************************
// **********************************************
// *************   Constructor     *************
// **********************************************
// **********************************************

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", "137", "145") , _target(target)
{
}


// **********************************************
// **********************************************
// *************     Actions        *************
// **********************************************
// **********************************************

bool    ShrubberyCreationForm::task() const
{
    std::ofstream   out;
    std::string outputFile(_target + "_shrubbery");

    out.open(outputFile.c_str(), std::ofstream::out);
    if (!out.is_open())
    {
        std::cerr << "Error in opening the file" << std::endl;
        return (false);
    }
    const char* asciiTree =
    "                                                         .\n"
    "                                              .         ;  \n"
    "                 .              .              ;%     ;;   \n"
    "                   ,           ,                :;%  %;   \n"
    "                    :         ;                   :;%;'     .,   \n"
    "           ,.        %;     %;            ;        %;'    ,;\n"
    "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
    "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
    "               ;%;      %;        ;%;        % ;%;  ,%;' \n"
    "                `%;.     ;%;     %;'         `;%%;.%;'\n"
    "                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
    "                    `:%;.  :;bd%;          %;@%;'\n"
    "                      `@%:.  :;%.         ;@@%;'   \n"
    "                        `@%.  `;@%.      ;@@%;         \n"
    "                          `@%%. `@%%    ;@@%;        \n"
    "                            ;@%. :@%%  %@@%;       \n"
    "                              %@bd%%%bd%%:;     \n"
    "                                #@%%%%%:;;\n"
    "                                %@@%%%::;\n"
    "                                %@@@%(o);  . '         \n"
    "                                %@@@o%;:(.,'         \n"
    "                            `.. %@@@o%::;         \n"
    "                               `)@@@o%::;         \n"
    "                                %@@(o)::;        \n"
    "                               .%@@@@%::;         \n"
    "                               ;%@@@@%::;.          \n"
    "                              ;%@@@@%%:;;;. \n"
    "                          ...;%@@@@@%%:;;;;,..     ";
    out << asciiTree;
    
    std::cout << "ShrubberyCreationForm " << _target << "_shrubbery file was created successfully" <<  std::endl;
    out.close();

    return (true);
}

AForm *ShrubberyCreationForm::clone(const std::string &target) const
{
    AForm *ptr = new ShrubberyCreationForm(target);
    return (ptr);
}