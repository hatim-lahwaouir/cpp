#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
    this->_contactSize = 0;
    this->_lastIndex = 0;
}

int main()
{
    PhoneBook Hatim;
    std::string input = "";

    while (1)
    {
        std::cout << "Choose you action: (ADD) or (SEARCH) or (EXIT)" << std::endl;
        while(input.empty())
        {
            std::cin >> input;
            if (input == "ADD")
                Hatim.Add();
            else if (input == "SEARCH")
                Hatim.Search();
            else
            {
                std::cerr << "Invalid action" << std::endl;
                input.clear();
            }
        }
        input.clear();
    }
}
