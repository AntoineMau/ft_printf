/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:41:53 by judumay           #+#    #+#             */
/*   Updated: 2019/01/15 16:43:03 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

void	ft_u(va_list ap, __int32_t *tab)
{
	char	*tmp;
	char	*str;

	str = NULL;
	tmp = NULL;
	if (!(str = ft_itoa_unsi(va_arg(ap, __uint32_t), tmp)))
		return ;
	if (tab[1] > ft_strlen(str))
	{
		tab[1] = tab[1] - ft_strlen(str);
		while (tab[1] > 0)
		{
			tmp = strdup(str);
			if (ft_strcmp(str, "-2147483648") != 0)
				ft_memdel(str);
			str = ft_preci_int(tmp, "0\0");
			ft_memdel(tmp);
			tab[1]--;
		}
	}
	ft_putstr(str, tab);
	free(str);
}

void	ft_u_long(va_list ap, __int32_t *tab)
{
	char	*tmp;
	char	*str;

	str = NULL;
	tmp = NULL;
	if (!(str = ft_itoa_unsi_long(va_arg(ap, __uint64_t), tmp)))
		return ;
	if (tab[1] > ft_strlen(str) && (tab[1] = tab[1] - ft_strlen(str)))
		while (tab[1] > 0)
		{
			tmp = strdup(str);
			str = ft_preci_int(tmp, "0\0");
			ft_memdel(tmp);
			tab[1]--;
		}
	ft_putstr(str, tab);
	free(str);
}
