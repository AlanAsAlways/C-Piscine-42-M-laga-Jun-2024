char	*ft_strcpy(char *dest, char *src)
{
	int	num;

	num = 0;
	while (src[num] != '\0')
	{
		dest[num] = src[num];
		num++;
	}
	dest[num] = '\0';
	return (dest);
}
