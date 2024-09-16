#include <unistd.h>

void	ft_putstr(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		write (1, &str[l], 1);
		l++;
	}
}
