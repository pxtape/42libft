#include <stdlib.h>

void	*ft_calloc(size_t size)
{
	void	*p;

	p = malloc(size);
	ft_bzero(p, size);
	return (p);
}