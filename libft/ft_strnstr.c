/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:18:03 by judumay           #+#    #+#             */
/*   Updated: 2019/04/24 18:03:25 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*str;

	if (*needle == '\0')
		return ((char*)haystack);
	i = ft_strlen(needle);
	str = (char*)haystack;
	while (*str && len-- >= i)
	{
		if (ft_memcmp(str, needle, i) == 0)
			return (str);
		str++;
	}
	return (NULL);
}
