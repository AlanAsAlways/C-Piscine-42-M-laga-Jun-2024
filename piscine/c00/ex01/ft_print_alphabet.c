#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	cuenta;

	cuenta = 97;
	while (cuenta < 123)
	{
		write(1, &cuenta, 1);
		cuenta++;
	}
}
