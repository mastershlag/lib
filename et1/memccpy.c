/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:11:57 by pharatyk          #+#    #+#             */
/*   Updated: 2018/11/09 13:12:01 by pharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*cpdest;
	char	*cpsrc;
	size_t	cpt;

	cpt = -1;
	if (n == 0 || src == dest)
		return (dest);
	cpdest = (char*)dest;
	cpsrc = (char*)src;
	while (++cpt < n)
	{
		cpdest[cpt] = cpsrc[cpt];
		if (cpsrc[cpt + 1] == (char)c)
			return (dest + cpt + 1);
	}
	return (0);
}
