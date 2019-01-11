/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:07:10 by judumay           #+#    #+#             */
/*   Updated: 2019/01/11 18:33:00 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_d_i(va_list ap, int champ)
{
	char	*tmp;
	char	*str;

	str = NULL;
	tmp = NULL;
	if (!(str = ft_itoa(va_arg(ap, int), tmp)))
		return ;
	ft_putstr(str, -1, champ);
	if (ft_strcmp(str, "-2147483648") != 0)
		free(str);
}
