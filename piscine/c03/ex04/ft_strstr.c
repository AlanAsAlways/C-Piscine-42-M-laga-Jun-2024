#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i] && to_find[i])
			i++;
		if (!to_find[i])
			return (str);
		str++;
	}
	return (NULL);
}
