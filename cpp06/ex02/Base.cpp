#include "Base.hpp"
#include "Others.hpp"

Base::~Base(){}


Base * generate(void)
{
    std::srand(time(NULL));
    
    int nbr = rand() % 2;
    switch (nbr)
    {
        case 0:
            return (new A());
        case 1:
            return (new B());
    }
    return (new C());
}

void identify(Base* p)
{
    if (!p)
    {
        std::cerr << "NULL given as parameter !" << std::endl;
        return;
    }
    if (dynamic_cast<B *>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C" << std::endl;
    else
        std::cerr << "This object is neither of A,B or C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch(const std::exception& e){ }
       try
    {
        dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch(const std::exception& e){ } 
    try
    {
        dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch(const std::exception& e){ }
    
    std::cerr << "This object is neither of A,B or C" << std::endl;
}



int main()
{
    Base *p = NULL;

    identify(p);
}
