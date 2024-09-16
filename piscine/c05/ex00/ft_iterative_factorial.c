int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	i = 1;
	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (i <= nb)
	{
		r *= i;
		i++;
	}
	return (r);
}
