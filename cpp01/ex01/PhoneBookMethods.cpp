#include "PhoneBook.hpp"

// first name
// last name
// nickname
// phone number
// darkest secret

void    PhoneBook::get_firstName(int index)
{
    std::string input;

    while (!input.empty())
        std::cin >> input;
    this->_contacts[index].set_firstName(input);
}

void    PhoneBook::get_lastName(int index)
{
    std::string input;

    while (!input.empty())
        std::cin >> input;
    this->_contacts[index].set_lastName(input);
}

void    PhoneBook::get_nickName(int index)
{
    std::string input;

    while (!input.empty())
        std::cin >> input;
    this->_contacts[index].set_nickName(input);
}

void    PhoneBook::get_drackSecret(int index)
{
    std::string input;

    while (!input.empty())
        std::cin >> input;
    this->_contacts[index].set_darkSecret(input);
}

void    PhoneBook::add()
{
    int index;

    this->get_firstName(index);
    this->get_lastName(index);
    this->get_nickName(index);
    this->get_drackSecret(index);
}
