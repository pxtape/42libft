#include <stdlib.h>

size_t	strlcat(char *dest, char *src, size_t size)
{
	size_t	len;
	size_t	i;
	
	len = ft_strlen(dest) + ft_strlen(src);
	i = ft_strlen(dest);
	while (i < size - 1)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (len);
}