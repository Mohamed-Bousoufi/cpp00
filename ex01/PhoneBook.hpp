#ifndef PHONEBOOK_H

#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private :
        Contact contacts[8];
    public :
        void Set_Contact();
        int Add_Contact(int i);
        void Display();
        void Display_Contacts(int i);
        void Search_Contacts();

};


#endif