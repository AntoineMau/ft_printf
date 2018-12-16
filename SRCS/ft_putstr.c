/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:34:15 by anmauffr          #+#    #+#             */
/*   Updated: 2018/12/16 19:40:35 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <unistd.h>

void	ft_putstr(char *str, int arron)
{
	if (arron == -1 || arron >= ft_strlen(str))
		write(1, str, ft_strlen(str));
	else
		write(1, str, arron);
}