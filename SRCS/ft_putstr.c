/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:34:15 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/08 17:56:54 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <unistd.h>

void	ft_putstr(char *str, int preci, int champ)
{
	dprintf(1, "\npreci: %dchamp:%d\tstr:%s\n", preci, champ, str);
	champ++;
	if (preci == -1 || preci >= ft_strlen(str))
	{
		while (--champ > ft_strlen(str))
			ft_putchar(' ');
		write(1, str, ft_strlen(str));
	}
	else
	{
		while (--champ > preci)
			ft_putchar(' ');
		write(1, str, preci);
	}
}

