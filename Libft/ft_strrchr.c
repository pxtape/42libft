#include <stdlib.h>

char	*ft_strchr(const char *str, int c)
{
	char	*last_pos;

	last_pos = NULL;
	while (*str)
	{
		if (*str == c)
			last_pos = str;
		str++;
	}
	return (last_pos);
}