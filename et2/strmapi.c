#include "libft.h"

char * ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char			*out;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (0);
	if (!(out = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	while (s[i])
		out[i++] = f(i, s[i]);
	return (out);
}
