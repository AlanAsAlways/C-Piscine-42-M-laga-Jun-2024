#include <unistd.h>

void	ft_putstr(char *str)
{
	int	letras;

	letras = 0;
	while (str[letras])
	{
		write (1, &str[letras], 1);
		letras++;
	}
}
