#include "PhoneBook.hpp"

void    PhoneBook::printFormat(std::string str)
{
    if (str.size() > 10)
    {
        str.resize(10, ' ');
        str.back() = '.';
    }
    else
        str.resize(10, ' ');
    std::cout << str;
}


void    PhoneBook::display()
{
    int index;

    index = 0;
    if (this->_contactSize != 0)
        std::cout << "   index  |" << "first name|" << "last name|" << " nickname ";
    while (index < this->_lastIndex)
    {
        std::cout << index << "         " << "|";
        this->printFormat(this->_contacts[index].get_firstName()); std:: cout << "|";
        this->printFormat(this->_contacts[index].get_lastName()); std:: cout << "|";
        this->printFormat(this->_contacts[index].get_nickName());  std:: cout <<std::endl;
        index++;
    }
}

void    PhoneBook::Search()
{
    this->display();
}