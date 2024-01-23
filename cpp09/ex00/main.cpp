// reading features 
// validating date format and that date exist 
// validating the second arguments
// creat a split function return a vector of strings

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Invalid parameters"<< std::endl;
        return (1);
    }
    try
    {
        BitcoinExchange obj("data.csv");
        obj.read_db();
        obj.read_input(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    
    }
    (void)av;
}