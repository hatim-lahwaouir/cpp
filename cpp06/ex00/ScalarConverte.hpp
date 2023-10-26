#ifndef SCALARCONVERTE_HPP
#define SCALARCONVERTE_HPP

# include "iostream"
# include "sstream"

class  ScalarConverte
{
    public:
        static void    convert(const std::string&);
        // representation trimed 
        static std::string newRep;
};

std::string ft_trim(const std::string oldrep);
bool    NbrGoodRep(const std::string &rep);

#endif