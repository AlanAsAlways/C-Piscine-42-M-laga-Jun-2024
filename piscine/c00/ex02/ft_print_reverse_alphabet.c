#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	cuenta;

	cuenta = 122;
	while (cuenta > 96)
	{
		write(1, &cuenta, 1);
		cuenta--;
	}
}
