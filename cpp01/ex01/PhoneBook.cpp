#include "PhoneBook.hpp"

Contact::Contact()
{
    this->_phoneNbr = "";
    this->_firstName = "";
    this->_nickName = "";
    this->_phoneNbr = "";
    this->_darketSecret = "";
    this->_index = "";
    this->_exist = 0;
}

PhoneBook::PhoneBook(void)
{
    for(int i = 0; i < 8; i++)
        (void)_contacts[i];
}

std::string  PhoneBook::print(std::string str)
{
    if (str.length() > 10)
    {
        str.resize(10, ' ');
        str.back() = '.';
    }
    else
        str.resize(10, ' ');
    return (str);
}

void    PhoneBook::search(int index)
{
    if (index < 0 || index > 8)
        std::cerr << "Index out of range" << std::endl;
    else if (!this->_contacts[index].i_exist())
        std::cerr << "Contact doesn't exist"<< std::endl;
    else
    {
        std::cout << this->print(_contacts[index].get_index()) << '|';
        std::cout << this->print(_contacts[index].get_firstName()) << '|';
        std::cout << this->print(_contacts[index].get_lastName()) << '|';
        std::cout << this->print(_contacts[index].get_nickName()) <<std::endl;
    }
}

int main()
{
    PhoneBook Hatim;



}