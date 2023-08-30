#include "../libft.h"
#include <string.h>
#include <stdio.h>

int main() {
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 5);
	printf("%p\n", ptr);
}