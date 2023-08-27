#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, size_t n);

int	ft_strnstr(char *str, char *sub, size_t n)
{
	size_t	sublen;
	size_t	i;

	sublen = ft_strlen(sub);
	i = 0;
	while (*(str + i + n - 1) && i < n - 1)
	{
		if (!ft_strncmp(str + i, sub, sublen))
			return (str);
		i++;
	}
	return (NULL);
}