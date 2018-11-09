/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:33:59 by pharatyk          #+#    #+#             */
/*   Updated: 2018/11/07 12:34:01 by pharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heabim.h"

void *ft_memset(void *str, int c, size_t n)
{
	char *saviour;
	size_t john;

	john = -1;
	saviour = str;
	while (++john < n)
		saviour[john] = c;
	return (str);
}
/*
int main()
{
	char str[] = "jtebez";
	printf("%s", (char *)ft_memset(str, 127, 2));
	return 0;
}
*/