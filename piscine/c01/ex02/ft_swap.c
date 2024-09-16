#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	vaso;

	vaso = *a;
	*a = *b;
	*b = vaso;
}
