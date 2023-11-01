#ifndef SCALARCONVERTE_HPP
#define SCALARCONVERTE_HPP

# include "iostream"
# include "sstream"
# include "limits"

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
    // orthodox canonical form
        ScalarConverte();
        ScalarConverte(const ScalarConverte&);
        ScalarConverte &operator =(const ScalarConverte&);
        ~ScalarConverte();
};

#endif