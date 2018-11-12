#include "libft.h"

int		ft_target(char a, char c)
{
	if (a == c)
		return (1);
	else
		return (0);
}

void	ft_remplisfdp(char *s, char **mdr, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = 0;
	while (s[i])
	{
		while (ft_target(s[i], c) == 1)
			i++;
		while (ft_target(s[i], c) == 0 && s[i])
		{
			mdr[k][j] = s[i];
			j++;
			i++;
		}
		mdr[k][j] = 0;
		k++;
		j = 0;
	}
	mdr[k] = 0;
}

char	*ft_nikles(const char *s, char c)
{
	int		i;
	char	*joie;

	i = 0;
	while (s
		[i])
		i++;
	if (!(joie = (char*)malloc(sizeof(char) * (i + 1))))
		return (0);
	i = -1;
	while (s
		[++i])
		joie[i] = s
	[i];
	joie[i] = 0;
	while (ft_target(joie[--i], c) == 1)
		joie[i] = 0;
	return (joie);
}

char	**ft_taille(char *joie, char c)
{
	int		i;
	int		k;
	char	**mdr;

	i = 0;
	k = 0;
	while (joie[i])
	{
		while (ft_target(joie[i], c) == 1 && joie[i])
			i++;
		if (ft_target(joie[i], c) == 0 && joie[i])
		{
			k++;
			while (ft_target(joie[i], c) == 0 && joie[i])
				i++;
		}
	}
	if (!(mdr = (char**)malloc(sizeof(char*) * (k + 2))))
		return (0);
	return (mdr);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	*joie;
	char	**mdr;

	mdr = 0;
	joie = ft_nikles(s, c);
	mdr = ft_taille(joie, c);
	k = 0;
	i = 0;
	while (joie[i])
	{
		j = 0;
		while (ft_target(joie[i], c) == 1)
			i++;
		while (ft_target(joie[i], c) == 0 && joie[i])
		{
			i++;
			j++;
		}
		if (!(mdr[k++] = (char*)malloc(sizeof(char) * (j + 2))))
			return (0);
	}
	mdr[k] = 0;
	ft_remplisfdp(joie, mdr, c);
	return (mdr);
}
