char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	bigi;

	i = 0;
	bigi = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (bigi == 1)
				str[i] -= 32;
			bigi = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			bigi = 0;
		}
		else
		{
			bigi = 1;
		}
		i++;
	}
	return (str);
}
