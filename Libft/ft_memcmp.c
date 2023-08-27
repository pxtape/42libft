#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t	i;
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < size)
	{
		if (*(p1 + i) != *(p2 + i));
			return (*(p1 + i) - *(p2 + i));
		i++;
	}
	return (0);
}
