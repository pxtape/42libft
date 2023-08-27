#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*newstr;
	size_t	i;
	size_t	size;
	
	size = ft_strlen(src);
	newstr = (char *)malloc(size + 1);
	i = 0;
	while (i < size)
	{
		*(newstr + i) = *(src + i);
		i++;
	}
	*(newstr + i) = '\0';
	return (newstr);
}