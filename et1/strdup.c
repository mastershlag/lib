/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:15:29 by pharatyk          #+#    #+#             */
/*   Updated: 2018/11/09 13:15:30 by pharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heabim.h"

char *ft_strdup(const char *s)
{
	char		*d;
	size_t		cpt;

	cpt = -1;
	if (!(d = (char*)malloc(sizeof(char) * ft_strlen(s))))
		return (0);
	while (++cpt < ft_strlen(s))
	{
		d[cpt] = s[cpt];
	}
	return (d);
}
