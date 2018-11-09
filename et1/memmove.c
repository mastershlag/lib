/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:13:50 by pharatyk          #+#    #+#             */
/*   Updated: 2018/11/09 13:13:51 by pharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heabim.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char memoire[n];

	ft_memcpy(memoire, src, n);
	ft_memcpy(dest, memoire, n);
	return (dest);
}
