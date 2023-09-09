#include <iostream>
#include <string>

#include "Contact.hpp"

void Contact ::init_contact(int i)
{
	index = i;
	first_name = "";
}
void Contact ::Set_Index(int i)
{
	this->index = i;
}
int Contact :: Set_First_Name()
{
	std ::cout << "ENTER CONTACT FIRST_NAME : " << std ::endl;
	std ::getline(std ::cin, first_name);
		if(std :: cin.eof())
		{
			std :: cin.ignore();
			fclose(stdin);
			fopen("/dev/tty","r");
		}
		while (first_name.size() == 0)
		{
			std ::cout << "FIRST NAME IS EMPTY RE ENTRE IT !!!" << std ::endl;
			std ::getline(std ::cin, first_name);
				if(std :: cin.eof())
				{
					std :: cin.clear();
					fclose(stdin);
					fopen("/dev/tty","r");
				}
		}
		if (first_name.size() >= 10)
		{
			first_name.replace(9, first_name.length() - 9, ".");
		}
		return(1);
}

int Contact ::Set_Last_Name()
{
	std ::cout << "ENTER CONTACT LAST_NAME : " << std ::endl;
	std ::getline(std ::cin, last_name);
	if(std :: cin.eof())
	{
		std :: cin.clear();
		fclose(stdin);
		fopen("/dev/tty","r");
	}
	while (last_name.size() == 0)
	{
		std ::cout << "LAST NAME IS EMPTY RE ENTRE IT !!!" << std ::endl;
		std ::getline(std ::cin, last_name);
		if(std :: cin.eof())
		{
			std :: cin.clear();
			fclose(stdin);
			fopen("/dev/tty","r");
		}
	}
	if (last_name.size() >= 10)
	{
		last_name.replace(9, last_name.length() - 9, ".");
	}
	return(1);
}
int chekc_numbers(std ::string s)
{
	if (s.empty())
		return(0);
	for (unsigned long i = 0; i < s.length(); i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
int Contact ::Set_Number_Phone()
{
	std ::cout << "ENTER CONTACT NUMBER PHONE: " << std ::endl;
	std ::getline(std ::cin, phone_number);
	if(std :: cin.eof())
	{
		std :: cin.clear();
		fclose(stdin);
		fopen("/dev/tty","r");
	}
	while (phone_number.size() == 0)
	{
		std ::cout << "PHONE NUMBER IS EMPTY RE ENTRE IT !!!" << std ::endl;
		std ::getline(std ::cin, phone_number);
		if(std :: cin.eof())
		{
			std :: cin.clear();
			fclose(stdin);
			fopen("/dev/tty","r");
		}
	}
	while (!chekc_numbers(phone_number))
	{
			std ::cout << "PHONE NUMBER MUST BE NUMBER !!!" << std ::endl;
			std ::getline(std ::cin, phone_number);
			if(std :: cin.eof())
			{
				std :: cin.clear();
				fclose(stdin);
				fopen("/dev/tty","r");
			}
	}
	if (phone_number.size() >= 10)
	{
		phone_number.replace(9, phone_number.length() - 9, ".");
	}
	return(1);
}

int Contact ::Set_Nick_Name()
{
	std ::cout << "ENTER CONTACT NICK_NAME : " << std ::endl;
	std ::getline(std ::cin, nick_name);
	if(std :: cin.eof())
	{
		std :: cin.clear();
		fclose(stdin);
		fopen("/dev/tty","r");
	}
	while (nick_name.size() == 0)
	{
		std ::cout << "NICK NAME IS EMPTY RE ENTRE IT !!!" << std ::endl;
		std ::getline(std ::cin, nick_name);
		if(std :: cin.eof())
		{
			std :: cin.clear();
			fclose(stdin);
			fopen("/dev/tty","r");
		}
	}
	if (nick_name.size() >= 10)
	{
		nick_name.replace(9, nick_name.length() - 9, ".");
	}
	return(1);
}

int Contact ::Set_Darkest_secret()
{
	std ::cout << "ENTER CONTACT DARKEST_SECRET : " << std ::endl;
	std ::getline(std ::cin, darkest_secret);
	if(std :: cin.eof())
	{
		std :: cin.clear();
		fclose(stdin);
		fopen("/dev/tty","r");
	}
	while (darkest_secret.size() == 0)
	{
		std ::cout << "DARKEST SECRET IS EMPTY RE ENTRE IT !!!" << std ::endl;
		std ::getline(std ::cin, darkest_secret);
		if(std :: cin.eof())
		{
			std :: cin.clear();
			fclose(stdin);
			fopen("/dev/tty","r");
		}
	}
	if (darkest_secret.size() >= 10)
	{
		darkest_secret.replace(9, darkest_secret.length() - 9, ".");
	}
	return(1);
}

std ::string Contact ::Get_First_Name()
{
	return (this->first_name);
}

std ::string Contact ::Get_Last_Name()
{
	return (this->last_name);
}

std ::string Contact ::Get_Nick_Name()
{
	return (this->nick_name);
}
int Contact ::Get_Index()
{
	return (this->index);
}
