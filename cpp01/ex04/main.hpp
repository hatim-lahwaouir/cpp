/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 02:35:20 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/23 02:36:13 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

# include "iostream"
# include "fstream"

void        writeTofile(std::ofstream &out, std::string &inputBuffr, std::string &s1, std::string &s2);
std::string fileTobuffr(std::ifstream &in);

#endif