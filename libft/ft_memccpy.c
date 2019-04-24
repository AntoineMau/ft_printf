/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:12:20 by judumay           #+#    #+#             */
/*   Updated: 2019/04/24 18:01:12 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = dst;
	while (i < n)
	{
		ptr[i] = ((char*)src)[i];
		if (((char*)src)[i] == (char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
