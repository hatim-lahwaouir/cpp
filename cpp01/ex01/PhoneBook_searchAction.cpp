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
        std::cout << "   index  |" << "first name|" << "last name |" << " nickname " << std::endl;
    while (index < this->_lastIndex)
    {
        std::cout << "    " << index << "     " "|";
        this->printFormat(this->_contacts[index].get_firstName()); std:: cout << "|";
        this->printFormat(this->_contacts[index].get_lastName()); std:: cout << "|";
        this->printFormat(this->_contacts[index].get_nickName());  std:: cout <<std::endl;
        index++;
    }
}

void    PhoneBook::infoOfIndex()
{
    int index;

    if (this->_contactSize == 0)
    {
        std::cout << "No contact are in you phonebook" << std::endl;
        return;
    }
    while(1)
    {
        std::cout << "Enter the index you are searching for:" << std::endl; 
        std::cin >> index;
        std::cout << this->_lastIndex << std::endl;
        if (std::cin.fail() || index > this->_lastIndex || index < 0)
            std::cerr << "Invalid Index" << std::endl;
        else
            break;
    }
    std::cout << "Phone number: " << this->_contacts[index].get_firstName() << std::endl;
    std::cout << "Last name: " << this->_contacts[index].get_lastName() << std::endl;
    std::cout << "Nickname: " << this->_contacts[index].get_nickName() << std::endl;
    std::cout << "Phone number: " << this->_contacts[index].get_phoneNumber() << std::endl;
}

void    PhoneBook::Search()
{
    this->display();
    this->infoOfIndex();
}