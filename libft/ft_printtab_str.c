/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 18:20:12 by judumay           #+#    #+#             */
/*   Updated: 2019/04/24 18:01:38 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printtab_str(char **str)
{
	int i;

	i = -1;
	if (!str)
		return ;
	while (str[++i])
		ft_putendl(str[i]);
}
