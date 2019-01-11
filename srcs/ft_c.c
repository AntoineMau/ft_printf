/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:38:56 by judumay           #+#    #+#             */
/*   Updated: 2019/01/11 14:40:03 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

void	ft_c(int champ, va_list ap)
{
	while (champ-- - 1 > 0)
		ft_putchar(' ');
	ft_putchar(va_arg(ap, int));
}
