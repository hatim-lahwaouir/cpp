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
    while (index < this->_contactSize)
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
    int         index;
    std::string input;

    if (this->_contactSize == 0)
    {
        std::cout << "No contact are in you phonebook" << std::endl;
        return;
    }
    while(1)
    {
        std::cout << "Enter the index you are searching for:  "; 
        std::cin >> input;
        if (std::cin.eof())
            exit(0);
        if(input.length() == 1 && isdigit(input[0]))
            index = input[0] - 48;
        else
        {
            std::cerr << "Invalid index" << std::endl;
            continue;
        }
        if (index > this->_contactSize - 1 || index < 0)
            std::cerr << "Invalid index" << std::endl;
        else
            break;
    }
    std::cout << "Phone number: " << this->_contacts[index].get_firstName() << std::endl;
    std::cout << "Last name: " << this->_contacts[index].get_lastName() << std::endl;
    std::cout << "Nickname: " << this->_contacts[index].get_nickName() << std::endl;
    std::cout << "Phone number: " << this->_contacts[index].get_phoneNumber() << std::endl;
    std::cout << "Darkest secret: " << this->_contacts[index].get_darkestSecret() << std::endl;
}

void    PhoneBook::Search()
{
    this->display();
    this->infoOfIndex();
}