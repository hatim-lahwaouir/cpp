#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"


class   PhoneBook
{
    Contact     _contacts[8];
    void        set_firstName(int index, std::string input);
    void        set_lastName(int index,std::string input);
    void        set_nickName(int index,std::string input);
    void        set_phoneNumber(int index,std::string input);
    void        set_darkestSecret(int index,std::string input);
    void        infoOfIndex();
    int         _contactSize;
    // index Of Last Contact
    int         _lastIndex;
    // display function of search
    void        display();
    void        printFormat(std::string str);
    // should be added
    void        add_it(int index);
    // all degits
    bool        isDigits(std::string str);
    public:
        PhoneBook();
        // actions
        void    Add();
        void    Search();
        void    Exit();
};

#endif