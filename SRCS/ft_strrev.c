/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:35:44 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/09 13:29:23 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (str[i])
		i++;
	j = -1;
	while (++j < --i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	return (str);
}
