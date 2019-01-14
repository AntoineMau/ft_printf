/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:41:53 by judumay           #+#    #+#             */
/*   Updated: 2019/01/14 18:00:37 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

void	ft_u(va_list ap, __int32_t champ, __int32_t preci)
{
	char	*tmp;
	char	*str;

	str = NULL;
	tmp = NULL;
	if (!(str = ft_itoa_unsi(va_arg(ap, __uint32_t), tmp)))
		return ;
	if (preci > ft_strlen(str))
	{
		preci = preci - ft_strlen(str);
		while (preci > 0)
		{
			tmp = strdup(str);
			if (ft_strcmp(str, "-2147483648") != 0)
				ft_memdel(str);
			str = ft_preci_int(tmp, "0\0");
			ft_memdel(tmp);
			preci--;
		}
	}
	ft_putstr(str, -1, champ);
	free(str);
}
