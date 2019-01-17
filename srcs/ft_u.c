/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:41:53 by judumay           #+#    #+#             */
/*   Updated: 2019/01/17 15:45:56 by judumay          ###   ########.fr       */
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
			ft_memdel(str);
			str = ft_j(tmp, "0\0");
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
			str = ft_j(tmp, "0\0");
			ft_memdel(tmp);
			tab[1]--;
		}
	ft_putstr(str, tab);
	free(str);
}
