#include "libft.h"

char * ft_strtrim(char const *s)
{
	char	*out;
	int		len;
	int		i;

	i = -1;
	if (!s)
		return (0);
	len = strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n'
		|| s[len - 1] == '\v' || s[len - 1] == '\r')
		len--;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n'
		|| s[i] == '\v' || s[i] == '\r')
		len--;
	if (len < 0)
		len = 0;
	if (!(out = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	s = s + i;
	i = -1;
	while (++i < len)
		out[i] = *s++;
	out[i] = 0;
	return (out);
}
