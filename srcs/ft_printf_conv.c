/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:04:24 by anmauffr          #+#    #+#             */
/*   Updated: 2019/04/24 17:58:11 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

t_printf		*ft_printf_conv(t_printf *p)
{
	__int32_t	i;

	i = 0;
	while (i < 9 && !p->error)
		p = p->tab_ptr[i++](p);
	return (p);
}
