/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 23:11:38 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/26 23:51:34 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putwstr_fd(wchar_t const *ws, int fd)
{
	int		i;

	i = 0;
	while (ws && ws[i])
		ft_putwchar_fd(ws[i++], fd);
}
