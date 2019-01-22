/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplugc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 08:42:26 by mapandel          #+#    #+#             */
/*   Updated: 2017/01/24 08:46:05 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strplugc(const char *s, char tochange, char toadd)
{
	char	*dup;
	int		i;

	i = 0;
	dup = ft_strdup(s);
	while (dup && dup[i] && dup[i] != tochange)
		++i;
	if (dup[i] == tochange)
		dup[i] = toadd;
	return (dup);
}
