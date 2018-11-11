#include "libft.h"

char * ft_strtrim(char const *s)
{
	char	*out;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n'
		|| s[len - 1] == '\v' || s[len - 1] == '\r')
		len--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
		|| s[i] == '\v' || s[i] == '\r')
		i++;
	if (!(out = (char *)malloc(sizeof(char) * (len - i + 1))))
		return (0);
	while (i < len)
		out[j++] = s[i++];
	out[j] = 0;
	return (out);
}

/*
int main()
{
	char gg[] = "   fdp  ca fonctionne 			   ";
	printf("%s\n", ft_strtrim(gg));
	return 0;
}
*/
