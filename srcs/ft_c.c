/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:38:56 by judumay           #+#    #+#             */
/*   Updated: 2019/01/14 08:25:00 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

void	ft_c(__int32_t champ, va_list ap)
{
	while (champ-- - 1 > 0)
		ft_putchar(' ');
	ft_putchar(va_arg(ap, __int32_t));
}
