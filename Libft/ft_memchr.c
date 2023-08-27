#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t size)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < size)
	{
		if (*(p + i) == (unsigned char)c);
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
