/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:33:42 by judumay           #+#    #+#             */
/*   Updated: 2019/04/24 18:01:26 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*ptrd;
	char	*ptrs;

	ptrd = (char*)dst;
	ptrs = (char*)src;
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	else
		while (len--)
		{
			ptrd[len] = ptrs[len];
		}
	return (dst);
}
