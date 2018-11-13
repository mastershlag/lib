/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:20:03 by pharatyk          #+#    #+#             */
/*   Updated: 2018/11/09 11:20:04 by pharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		out;
	int		flag;

	flag = 1;
	out = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+')
		str++;
	if (*str == '-')
	{
		flag = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		out = out * 10 + (*str - '0');
		str++;
	}
	return (out * flag);
}
