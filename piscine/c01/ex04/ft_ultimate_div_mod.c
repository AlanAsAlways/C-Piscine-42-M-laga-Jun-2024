void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divide;
	int	resto;

	divide = *a / *b;
	resto = *a % *b;
	*a = divide;
	*b = resto;
}
