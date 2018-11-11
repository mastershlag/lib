//#include "libft.h"
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_nbw(char const *s, char c)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			i++;
		while ()
	}
}

int		ft_wordlen(char const *s, char c, int i)
{
	int nbr;

	nbr = 0;
	while (s[i] != c)
	{
		nbr++;
//		printf("lettre %c nbr %d\n", s[i], nbr);
		i++;
	}
//	printf("NBR %d\n", nbr);
	return (nbr);
}

char ** ft_remplis(char const *s, char c, char **out)
{
	int		cpt;
	int		i;
	int		j;

	i = 0;
	j = -1;
	cpt = 0;
	while (s[++j])
	{
		if ((s[j] == c && s[j + 1] != c && s[j + 1]) || (!s[j + 1] && s[j] != c))
		{
			while (s[j + 1] != c)
				out[cpt][i++] = s[j++];
			out[cpt][i] = 0;
			cpt++;
		}
		s++;
	}
	out[cpt] = 0;
	return (out);
}

char ** ft_strsplit(char const *s, char c)
{
	int		cpt;
	int		i;
	char	**out;

	cpt = 0;
	i = 0;
	while (s[i] == c)
		i++;
	cpt	= ft_nbw(s,c);
	printf("cpt %d\n", cpt);
	if (!(out = (char **)malloc(sizeof(char *) * (cpt + 1))))
			return (0);
		i = -1;
		cpt = 0;
	while (s[++i])
	{
		if ((s[i] == c && s[i + 1] != c && s[i + 1]) || (!s[i + 1] && s[i] != c))
		{
			if (!(out[cpt++] = (char *)malloc(sizeof(char) * (ft_wordlen(s, c, i) + 1))))
				return (0);
		}
		//printf("hmm %c\n", s[i]);
	}
	ft_remplis(s, c, out);
	return (out);
}


int main()
{
	char **lol;
	char mdr[] = " ptdr t ki ? ";

	lol = ft_strsplit(mdr, ' ');
	while (**lol)
	{
		printf("%s\n", *lol);
		lol++;
	}
	return 0;
}
*/
