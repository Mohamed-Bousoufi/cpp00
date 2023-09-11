#include <iostream>
#include <string.h>

int main(int argc, char **argv)
{
	int i = 1;
	if (argc == 1)
	{
		std ::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std ::endl;
	}
	else
	{
		if (argv[i][0] != '\0')
		{
			while(argv[i] != NULL)
			{
				int j = 0;
				while(argv[i][j] != '\0')
				{
					if(std :: isprint(argv[i][j]))
					{
						if(std :: islower(argv[i][j]))
						{
							char c;

							c = std :: toupper(argv[i][j]);
							std :: cout << c;
						}
						else
						{
							std :: cout << argv[i][j];
						}
					}
						j++;
				}
					if(argv[i + 1])
					std :: cout << " ";
				i++;
			}
			std ::cout << std :: endl;
		}
		else
			std ::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std ::endl;
	}
}