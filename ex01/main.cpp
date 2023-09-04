#include <iostream>
#include <string.h>

#include "Contact.hpp"

#include "PhoneBook.hpp"

int main (void)
{
    std :: string input;
    PhoneBook Book;
    Book.Set_Contact();
    bool in = 1;
    int i = 0;
    while(in)
    {
        std :: cout << "TYPE ONE OFF THIS COMMANDE (ADD,SEARCH,EXIT)" << std ::endl;
        if (std :: getline(std :: cin,input))
        {
            if(!input.compare("ADD"))
            {
                if(i > 7)
                    i = 0;
                if(Book.Add_Contact(i))
                        i++;
                else
                   in = 0;
            }
            else if (!input.compare("SEARCH"))
            {
                Book.Search_Contacts();
            }
            else if (!input.compare("EXIT"))
            {
                in = 0;
            }
        }
        else
            in = 0;
    }
}