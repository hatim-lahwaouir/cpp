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
        while(input.empty())
        {
            std::cout << "Choose you action: (ADD) or (SEARCH) or (EXIT): ";
            std::cin >> input;
            if (std::cin.eof())
                exit(0);
            if (input == "ADD")
                Hatim.Add();
            else if (input == "SEARCH")
                Hatim.Search();
            else if (input == "EXIT")
                exit(0);
            else
            {
                std::cerr << "Invalid action" << std::endl;
                input.clear();
            }
        }
        input.clear();
    }
}
