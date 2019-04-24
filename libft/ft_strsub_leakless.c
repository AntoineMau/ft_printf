/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_leakless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:25:38 by judumay           #+#    #+#             */
/*   Updated: 2019/04/24 18:03:41 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub_leakless(char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*cpy;

	i = 0;
	if (!s || start > ft_strlen(s))
		return (NULL);
	cpy = ft_strnew(len);
	if (!cpy)
		return (NULL);
	while (i < len)
		cpy[i++] = s[start++];
	ft_strdel(&s);
	return (cpy);
}
