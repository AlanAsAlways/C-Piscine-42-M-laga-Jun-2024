#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	resultado;

	resultado = (a / b);
	*div = resultado;
	*mod = (a % b);
}
