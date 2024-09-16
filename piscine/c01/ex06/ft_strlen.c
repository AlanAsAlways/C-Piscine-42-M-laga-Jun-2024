#include <unistd.h>

int	ft_strlen(char *str)
{
	int	letras;

	letras = 0;
	while (str[letras])
	{
		letras++;
	}
	return (letras);
}
