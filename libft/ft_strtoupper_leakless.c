/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper_leakless.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 02:08:23 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/16 02:13:10 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper_leakless(char *s)
{
	char	*dup;
	int		i;

	dup = ft_strdup(s);
	i = 0;
	while (dup && dup[i])
	{
		if (dup[i] >= 'a' && dup[i] <= 'z')
			dup[i] -= 32;
		++i;
	}
	ft_strdel(&s);
	return (dup);
}
