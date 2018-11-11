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
		return (dlen + ft_strlen(s));
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
/*
int main()
{
	char a[] = "1234";
	char b[] = "4321";
	//char c[] = "1234";
	//char d[] = "4321";

	printf("%lu\n", ft_strlcat(a, b, 9));
	printf("amoi %s\n", a);
	printf("amoi %s\n", b);
	//printf("%lu\n", strlcat(c, d, 6));
	//printf("paamoi %s\n", c);
	//printf("paamoi %s\n", d);
	
	return 0;
}

*/
