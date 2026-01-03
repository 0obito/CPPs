#include <iostream>

int	main(int ac, char *av[])
{
	int			i;
	size_t		j;
	std::string	s;

	if (ac >= 2)
	{
		i = 1;
		while (i < ac)
		{
			s = av[i];
			j = 0;
			while (j < s.length())
			{
				std::cout << (char)std::toupper(s[j]);
				j += 1;
			}
			i += 1;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
