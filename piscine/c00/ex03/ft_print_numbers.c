#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digito;

	digito = 48;
	while (digito < 58)
	{
		write(1, &digito, 1);
		digito++;
	}
}
