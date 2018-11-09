/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:13:32 by pharatyk          #+#    #+#             */
/*   Updated: 2018/11/09 13:13:34 by pharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heabim.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
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
		cpdest[cpt] = cpsrc[cpt];
	return (dest);
}
/*
int main(int argc, char const *argv[])
{
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50];
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("after memcpy dest = %s\n", dest);
	return 0;
}
*/
