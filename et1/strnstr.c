/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:03:38 by pharatyk          #+#    #+#             */
/*   Updated: 2018/11/09 11:03:39 by pharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;

	i = 0;
	if (!(ft_strlen(needle)))
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			while (haystack[i] == needle[i] && (len - i))
			{
				if (needle[i + 1] == 0)
					return ((char *)haystack);
				i++;
			}
		}
		haystack++;
	}
	return (0);
}
