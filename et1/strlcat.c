#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	char *d;
	const char *s;
	size_t n;
	size_t dlen;

	n = siz;
	d = dst;
	s = src;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;
	if (n == 0)
		return (dlen + strlen(s));
	while (*s != '\0')
	{
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
