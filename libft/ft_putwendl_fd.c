/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwendl_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 23:08:07 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/17 23:09:35 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putwendl_fd(wchar_t const *ws, int fd)
{
	ft_putwstr_fd(ws, fd);
	write(fd, "\n", 1);
}
