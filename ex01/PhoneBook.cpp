#include "PhoneBook.hpp"

void PhoneBook ::Set_Contact()
{
	for (int i = 0; i < 8; i++)
		contacts[i].init_contact(i+1);
}
int PhoneBook ::Add_Contact(int i)
{
	contacts[i].Set_Index(i + 1);
	if(contacts[i].Set_First_Name())
		if(contacts[i].Set_Last_Name())
			if(contacts[i].Set_Number_Phone())
				if(contacts[i].Set_Nick_Name())
					if(contacts[i].Set_Darkest_secret())
					{
							std ::cout << std ::endl
							<< " :::CONTACT SAVED::::" << std ::endl
							<< std ::endl;
							return(1);
					}
					return(0);
}

void PhoneBook ::Display_Contacts(int i)
{
	if(contacts[i].Get_First_Name().size() != 0)
	{
		std ::cout << std ::endl;
		std ::cout <<"Index      :"<< contacts[i].Get_Index() << std :: endl;
		std ::cout <<"First Name :"<< contacts[i].Get_First_Name() <<std :: endl;
		std ::cout <<"Last_Name  :"<< contacts[i].Get_Last_Name() << std :: endl;
		std ::cout <<"Nick_Name  :"<< contacts[i].Get_Nick_Name() << std :: endl;
	}
	else
	std :: cout << "contact not found !!!"<< std :: endl;
}

void PhoneBook ::Display()
{
	int i = 0;
	std ::cout <<"Index"<< std :: setw(4) << "|" << "First Name";
	std ::cout << "|" << "Last Name ";
	std ::cout << "|" << "Nick Name ";
	std ::cout << std ::endl;
	while(contacts[i].Get_First_Name().size() !=0)
	{
		std ::cout << contacts[i].Get_Index() << std ::setw(8) << "|" << contacts[i].Get_First_Name();
		std ::cout << std :: setw(11 - contacts[i].Get_First_Name().size())<< "|" << contacts[i].Get_Last_Name();
		std ::cout <<std :: setw(11 - contacts[i].Get_Last_Name().size()) << "|"<< contacts[i].Get_Nick_Name();
		std ::cout << std ::endl;
		i++;
	}
}

void PhoneBook::Search_Contacts()
{

	std ::string index;
	int i;
	PhoneBook ::Display();
	std ::cout << "ENTER PLAYER INDEX" << std ::endl;
	std ::getline(std ::cin, index);
	if(std :: cin.eof())
	{
		std :: cin.clear();
		fclose(stdin);
		fopen("/dev/tty","r");
	}
	i = atoi(index.data());
	while (i <= 0 || i > 8)
	{
		std ::cout << "INDEX IS OUT OF RANGE RE ENTER IT" << std ::endl;
		std ::getline(std ::cin, index);
		if(std :: cin.eof())
		{
			std :: cin.clear();
			fclose(stdin);
			fopen("/dev/tty","r");
		}
		i = atoi(index.data());
	}
	Display_Contacts(i - 1);
}