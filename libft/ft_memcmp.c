/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:12:46 by judumay           #+#    #+#             */
/*   Updated: 2019/04/24 18:01:18 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*strs1;
	unsigned char	*strs2;

	strs1 = (unsigned char*)s1;
	strs2 = (unsigned char*)s2;
	i = 0;
	while (i < n && strs1[i] == strs2[i])
		i++;
	if (i == n)
		return (0);
	return (strs1[i] - strs2[i]);
}
