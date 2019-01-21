/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 08:55:10 by judumay           #+#    #+#             */
/*   Updated: 2019/01/21 09:50:20 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"
#include <stdlib.h>

void		ft_d_i_(t_printf *p)
{
	char		*str;
	char		*tmp;

	tmp = NULL;
	if (!(str = ft_itoa(va_arg(p->ap, __int32_t), tmp)))
		return ;
	dprintf(1, "itao : %s", str);
	p->preci = str[0] == '-' ? p->preci + 1 : p->preci;
	if (p->preci > ft_strlen(str) && (p->preci = p->preci - ft_strlen(str)))
		while (p->preci > 0)
		{
			tmp = strdup(str);
			if (ft_strcmp(str, "-2147483648") != 0)
				ft_memdel(str);
			str = ft_strjoin(tmp, "0");
			ft_memdel(tmp);
			p->preci--;
		}
	tmp = strdup(str);
	if (p->space == 1 && p->preci < ft_strlen(str)) //(tab[3] == 1 && tmp[0] != '-') ||
	{
		ft_memdel(str);
		p->space == 1 && p->preci < ft_strlen(str) ? str = ft_strjoin(tmp, " ") : 0;
	}
	ft_memdel(tmp);
	p->result = ft_strdup(str);
	ft_memdel(str);
}
