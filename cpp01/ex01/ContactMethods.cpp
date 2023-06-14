#include "PhoneBook.hpp"

std::string Contact::get_index()
{
    return (this->_index);
}

std::string Contact::get_firstName()
{
    return (this->_firstName);
}

std::string Contact::get_lastName()
{
    return (this->_lastName);
}

std::string Contact::get_nickName()
{
    return (this->_nickName);
}

int Contact::i_exist()
{
    return (this->_exist == 1);
}

void    Contact::set_index(std::string str)
{
    this->_index = str;
}

void    Contact::set_firstName(std::string str)
{
    this->_firstName = str;
}

void    Contact::set_lastName(std::string str)
{
    this->_lastName = str;
}

void    Contact::set_nickName(std::string str)
{
    this->_nickName = str;
}

void    Contact::set_darkSecret(std::string str)
{
    this->_darketSecret = str;
}