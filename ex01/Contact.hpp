#ifndef CONTACT_H
#define CONTACT_H

class Contact
{
	private :

	int              index;
	std :: string    first_name;
	std :: string    last_name;
	std :: string    nick_name;
	std :: string    phone_number;
	std :: string    darkest_secret;
	public :

	void Set_Index(int i);
	void init_contact(int i);
	int Set_First_Name();
	int Set_Last_Name();
	int Set_Nick_Name();
	int Set_Number_Phone();
	int Set_Darkest_secret();
	std :: string Get_First_Name();
	std :: string Get_Last_Name();
	std :: string Get_Nick_Name();
	int           Get_Index();
	void check_filed(std :: string s);

};

int chekc_numbers(std :: string s);
#endif