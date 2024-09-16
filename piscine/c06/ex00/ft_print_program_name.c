#include <unistd.h>

int	main(int argc,	char*argv[])
{
	int	len;

	argc = 0;
	len = 0;
	while (argv[0][len] != '\0')
	{
		len++;
	}
	write(1, argv[0], len);
	write(1, "\n", 1);
	return (0);
}
