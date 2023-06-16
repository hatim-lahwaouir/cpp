#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"


class   PhoneBook
{
    Contact     _contacts[8];
    // index Of Last Contact
    void        set_firstName(int index);
    void        set_lastName(int index);
    void        set_nickName(int index);
    void        set_phoneNumber(int index);
    void        set_darkestSecret(int index);
    void        infoOfIndex();
    int         _contactSize;
    int         _lastIndex;
    // display function of search
    void        display();
    void        printFormat(std::string str);
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