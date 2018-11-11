/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:15:58 by pharatyk          #+#    #+#             */
/*   Updated: 2018/11/09 13:15:59 by pharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	char *cpsrc;

	if (!(cpsrc =(char*)malloc(sizeof(char) * n)))
		return (0);
	ft_strncpy(cpsrc, src, n);
	ft_strcpy(dest + ft_strlen(dest), src);
	return (dest);
}
