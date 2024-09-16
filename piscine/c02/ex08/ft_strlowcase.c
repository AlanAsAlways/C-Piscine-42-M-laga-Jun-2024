char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A') && (str[a] <= 'Z'))
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);
}
