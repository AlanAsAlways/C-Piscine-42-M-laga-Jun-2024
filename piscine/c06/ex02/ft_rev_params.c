#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	len;

	i = argc - 1;
	while (i >= 1)
	{
		len = 0;
		while (argv[i][len] != '\0')
		{
			len++;
		}
		write(1, argv[i], len);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
