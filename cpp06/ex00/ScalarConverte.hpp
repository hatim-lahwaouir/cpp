/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:08:35 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/11/05 01:09:55 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTE_HPP
#define SCALARCONVERTE_HPP

# include "iostream"
# include "sstream"

class  ScalarConverte
{
    public:
        static void           convert(std::string);
        static std::string    pseudoElements[];
        // representation trimed 
        static std::string    newRep;
        static std::string ft_trim(const std::string oldrep);
        static bool        NbrGoodRep(const std::string &rep);
        static void        removef(std::string &rep);
        static bool        isPseudo(const std::string &rep);
        static bool        isFloatPseudo(const std::string &rep);
        static void        handlingPseudo(std::string &rep);
    private:
        ScalarConverte();
};

#endif