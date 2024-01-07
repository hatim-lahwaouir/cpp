#include "Array.hpp"


void f()
{
    system("leaks Array");
}

int main()
{

    try{
        Array <int>obj(1);
        Array <int> obj1(10);

        obj[0] = 12;

        obj1 = obj;
        std::cout << obj1[0];
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    atexit(f);
}