#include "ScalarConverte.hpp"

std::string ScalarConverte::newRep = "";

std::string ScalarConverte::pseudoElements[] = {"-inff", "+inff", "-inf", "+inf", "nan", "nanf"};



// OCF

ScalarConverte::ScalarConverte(){}
ScalarConverte::ScalarConverte(ScalarConverte const &obj){(void)obj;}
ScalarConverte &ScalarConverte::operator=(ScalarConverte const &obj)
{
    (void)obj;
    return (*this);
}
ScalarConverte::~ScalarConverte(){}


// converting 
void    toChar(std::string &rep)
{
    std::stringstream obj(rep);
    int nbr;
    obj >> nbr;
    // fail return True if there was a logical error operation
    if (!obj.fail())
    {
        if (isprint(nbr))
            std::cout << "'" << (char)nbr << "'";
        else
            std::cout << "Non displayable";
    }
    else
        std::cout << "Overflow";
}

void    toFloat(std::string &rep)
{
    std::stringstream obj(rep); 
    float nbr;
    obj >> nbr;
    std::cout << nbr;
    std::cout << "f";
}

void    toDouble(std::string &rep)
{
    std::stringstream obj(rep);
    double nbr;
    obj >> nbr;
    std::cout << nbr;
}

void    toInt(std::string &rep)
{
    std::stringstream obj(rep);
    int nbr;
    obj >> nbr;
    if (!obj.fail())
    {
        std::cout << nbr;
    }
    else
        std::cout << "Overflow";
}


void ScalarConverte::convert(std::string rep)
{
    std::string types[4] = {"char", "int", "float", "double"};
    void    (*ptr[4])(std::string &) = {&toChar, &toInt, &toFloat, &toDouble};
    ScalarConverte::newRep = ft_trim(rep);
    bool    goodRep = NbrGoodRep(ScalarConverte::newRep);
    bool    Pseuado = isPseudo(ScalarConverte::newRep);


    if (Pseuado)
        handlingPseudo(newRep);
    // if we have a good representation
    else if (goodRep)
    {
        // seting precision and printing in fixed point format
        std::cout.setf(std::ios::fixed);
        std::cout.precision(4);
        removef(newRep);
        for (size_t i = 0; i < 4; i++)
        {
            std::cout << types[i] << ": ";
            (*ptr[i])(ScalarConverte::newRep);
            std::cout << std::endl;
        }
    }
    // not good Rep
    else
    {
        std::cout << "char :" << "impossible" <<"\n";
        std::cout << "int :" << "impossible" << "\n";
        std::cout << "float :" << "nanf" << "\n";
        std::cout << "double :" <<  "nan" <<"\n";
    }
}

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cerr << "you must pass one argument!" << std::endl;
        return (1);
    }
    ScalarConverte::convert(av[1]);

}
