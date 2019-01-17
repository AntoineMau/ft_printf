/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:07:10 by judumay           #+#    #+#             */
/*   Updated: 2019/01/17 15:45:56 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

__int32_t	ft_strcmp(char *s1, char *s2)
{
	__int32_t	i;

	i = 0;
	while ((s1[i] && s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void		ft_d_i_(va_list ap, __int32_t *tab)
{
	char		*str;
	char		*tmp;

	tmp = NULL;
	if (!(str = ft_itoa(va_arg(ap, __int32_t), tmp)))
		return ;
	tab[1] = str[0] == '-' ? tab[1] + 1 : tab[1];
	if (tab[1] > ft_strlen(str) && (tab[1] = tab[1] - ft_strlen(str)))
		while (tab[1] > 0)
		{
			tmp = strdup(str);
			if (ft_strcmp(str, "-2147483648") != 0)
				ft_memdel(str);
			str = ft_j(tmp, "0\0");
			ft_memdel(tmp);
			tab[1]--;
		}
	tmp = strdup(str);
	if (tab[5] == 1 && tab[1] < ft_strlen(str)) //(tab[3] == 1 && tmp[0] != '-') || 
	{
		ft_memdel(str);
		tab[5] == 1 && tab[1] < ft_strlen(str) ? str = ft_j(tmp, " \0") : 0;
	}
	ft_memdel(tmp);
	ft_putstr(str, tab);
	ft_memdel(str);
}

void		ft_d_i_short(va_list ap, __int32_t *tab)
{
	char		*str;
	char		*tmp;

	tmp = NULL;
	if (!(str = ft_itoa(va_arg(ap, __int32_t), tmp)))
		return ;
	free(tmp);
	tab[1] = str[0] == '-' ? tab[1] + 1 : tab[1];
	if (tab[1] > ft_strlen(str))
	{
		tab[1] = tab[1] - ft_strlen(str);
		while (tab[1] > 0)
		{
			tmp = strdup(str);
			str = ft_j(tmp, "0\0");
			ft_memdel(tmp);
			tab[1]--;
		}
	}
	ft_putstr(str, tab);
	ft_memdel(str);
}

void		ft_d_i_long(va_list ap, __int32_t *tab)
{
	char		*str;
	char		*tmp;

	tmp = NULL;
	if (!(str = ft_itoa_unsi_long(va_arg(ap, __int64_t), tmp)))
		return ;
	free(tmp);
	tab[1] = str[0] == '-' ? tab[1] + 1 : tab[1];
	if (tab[1] > ft_strlen(str))
	{
		tab[1] = tab[1] - ft_strlen(str);
		while (tab[1] > 0)
		{
			str = ft_j(str, "0\0");
			tab[1]--;
		}
	}
	ft_putstr(str, tab);
	ft_memdel(str);
}
