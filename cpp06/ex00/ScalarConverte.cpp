#include "ScalarConverte.hpp"

std::string ScalarConverte::newRep = "";




// converting 
void    toChar(const std::string &rep, bool goodRep)
{
    if (goodRep)
    {
        std::stringstream obj(rep);
        int nbr;
        obj >> nbr;
        if (!obj.fail())
        {
            if (isprint(nbr))
                std::cout << "'" << (char)nbr << "'";
            else
                std::cout << "Non displayable";
        }
        else
            std::cerr << "Overflow";
    }
    else
        std::cerr << "Impossible";
}

void    toFloat(const std::string &rep, bool goodRep)
{
    if (goodRep)
    {
        std::stringstream obj(rep);
        float nbr;
        obj >> nbr;
        if (!obj.fail())
        {
                std::cout << nbr;
            if (nbr == (int)nbr)
                std::cout << ".0";
            std::cout << "f";
        }
        else
            std::cerr << "Overflow";
    }
    else
    {
        if (ScalarConverte::newRep == "+inff" || ScalarConverte::newRep == "-inff")
            std::cout << ScalarConverte::newRep;
        else
            std::cout << "nanf";
    }
}

void    toDouble(const std::string &rep, bool goodRep)
{
    if (goodRep)
    {
        std::stringstream obj(rep);
        double nbr;
        obj >> nbr;
        // if there is no error
        if (!obj.fail())
            std::cout << nbr;
        else
        {
            // we already check on the logic of the numbers 
            // now we check only on the overflow
            std::cerr << "Overflow";
        }
    }
    else
        std::cout << "nan";
}

void    toInt(const std::string &rep, bool goodRep)
{
    if (goodRep)
    {
        std::stringstream obj(rep);
        int nbr;
        obj >> nbr;
        if (!obj.fail())
        {
            std::cout << nbr;
        }
        else
            std::cerr << "Overflow";

    }
    else
        std::cerr << "Impossible";
}


void ScalarConverte::convert(const std::string &rep)
{
    std::string types[4] = {"char", "int", "float", "double"};
    void    (*ptr[4])(const std::string &, bool) = {&toChar, &toInt, &toFloat, &toDouble};
    ScalarConverte::newRep = ft_trim(rep);
    bool    goodRep = NbrGoodRep(ScalarConverte::newRep);
    for (size_t i = 0; i < 4; i++)
    {
        std::cout << types[i] << ": ";
        (*ptr[i])(rep, goodRep);
        std::cout << std::endl;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ScalarConverte::convert(av[1]);
}
