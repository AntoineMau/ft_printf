/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower_leakless.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:51:55 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/16 02:13:07 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtolower_leakless(char *s)
{
	char	*dup;
	int		i;

	dup = ft_strdup(s);
	i = 0;
	while (dup && dup[i])
	{
		if (dup[i] >= 'A' && dup[i] <= 'Z')
			dup[i] += 32;
		++i;
	}
	ft_strdel(&s);
	return (dup);
}
