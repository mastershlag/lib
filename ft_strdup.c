/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:15:29 by pharatyk          #+#    #+#             */
/*   Updated: 2018/11/09 13:15:30 by pharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*d;
	size_t		cpt;

	cpt = -1;
	if (!(d = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	while (++cpt < ft_strlen(s))
	{
		d[cpt] = s[cpt];
	}
	d[cpt] = 0;
	return (d);
}
