#include "iter.hpp"

//class A {public : A(int a): _a(a){}; int _a;};

void	ft_incr(int &nb)
{
	nb += 1;
}

int	*ft_incr2(int *nb)
{
	*nb += 1;
	return nb;
}

int	&ft_incr3(int *nb)
{
	*nb += 1;
	return (*nb);
}
int	ft_incr_print(int nb)
{
	nb += 1;
	std::cout << nb << std::endl;
	return (nb);
}

void	ft_toupper(std::string &str)
{
	for (unsigned int i = 0; i < str.size(); i++)
		str[i] = toupper(str[i]);
}
void ft_print_str(std::string str)
{
	std::cout << str << std::endl;
}


int main( void ) {

	std::string tabStr[2] = {"Hello", "World"};
	int	tab[5] = {0, 1, 2, 3, 4};
	std::cout << tab[0] << std::endl;

	iter(tab, 5, ft_incr);
	std::cout << tab[0] << std::endl;

	iter(tab, 5, ft_incr2);
	std::cout << tab[0] << std::endl;

	iter(tab, 5, ft_incr3);
	std::cout << tab[0] << "\n" << std::endl;

	iter(tab, 5, ft_incr_print);

	iter(tabStr, 2, ft_toupper);
	iter(tabStr, 2, ft_print_str);
	return 0;
}
