#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
	if (!s || !f)
		return (0);
	while (*s)
		f(s++);
}
