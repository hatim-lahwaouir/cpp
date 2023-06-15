#include "PhoneBook.hpp"


bool    PhoneBook::isDigits(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return (false);
    }
    return (true);
}

void    PhoneBook::set_firstName(int index)
{
    std::string input;

    std::cout << "Enter your first name:  ";
    std::cin >> input;
    this->_contacts[index].set_firstName(input);
}

void    PhoneBook::set_lastName(int index)
{
    std::string input;

    std::cout << "Enter your last name:  ";
    std::cin >> input;
    this->_contacts[index].set_lastName(input);
}

void    PhoneBook::set_nickName(int index)
{
    std::string input;

    std::cout << "Enter your nickname:  ";
    std::cin >> input;
    this->_contacts[index].set_nickName(input);
}

void    PhoneBook::set_phoneNumber(int index)
{
    std::string input = "";

    while (1)
    {
        std::cout << "Enter your phone number:  ";
        input.clear();
        std::cin >> input;
        if (this->isDigits(input))
            break;
        std::cerr << "Invalid number" << std::endl;
    }
    this->_contacts[index].set_phoneNumber(input);
}

void    PhoneBook::set_darkestSecret(int index)
{
    std::string input;

    std::cout << "Enter your darkest secret:  ";
    std::cin >> input;
    this->_contacts[index].set_darkestSecret(input);
}

void    PhoneBook::Add()
{
    this->_lastIndex = this->_lastIndex * (this->_lastIndex < 8);
    this->set_firstName(this->_lastIndex);
    this->set_lastName(this->_lastIndex);
    this->set_nickName(this->_lastIndex);
    this->set_phoneNumber(this->_lastIndex);
    this->set_darkestSecret(this->_lastIndex);
    this->_lastIndex++;
    this->_lastIndex = this->_lastIndex * (this->_lastIndex < 8);
    this->_contactSize = this->_contactSize + 1 * (this->_contactSize < 8);
}
