/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_point.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:19:06 by judumay           #+#    #+#             */
/*   Updated: 2019/01/17 16:30:47 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

__int32_t	ft_printf_point(__int32_t CHAMP, va_list ap,
const char *restrict format, __int32_t i)
{
	__int32_t	tab[1];
	char		*tmp;
	char		*str;

	tmp = NULL;
	str = NULL;
	tab[1] = ft_atoi(&format[i]);
	while (format[i] >= '0' && format[i] <= '9')
		i++;
	if (format[i] == 's')
		ft_putstr(va_arg(ap, char *), tab);
	else if (format[i] == 'd' || format[i] == 'i')
		ft_d_i_(ap, tab);
	else if (format[i] == 'o')
		ft_putoct_int(va_arg(ap, __int32_t), tab[1], CHAMP);
	else if (format[i] == 'u')
	{
		tmp = NULL;
		if (!(str = ft_itoa_unsi(va_arg(ap, __uint32_t), tmp)))
			return (FALSE);
		if (tab[1] > ft_strlen(str))
		{
			tab[1] = tab[1] - ft_strlen(str);
			while (tab[1] > 0)
			{
				str = ft_j(str, "0\0");
				tab[1]--;
			}
		}
		ft_putstr(str, tab);
		free(str);
		str = NULL;
	}
	else if (format[i] == 'x' || format[i] == 'X')
		ft_x(va_arg(ap, __uint32_t), format[i] - 23,
		tab[1], CHAMP);
	else if (format[i] == 'f')
		ft_putnbr_float1(va_arg(ap, double), tab[1], 0);
	else if (format[i] == 'h' && format[i + 1] == 'h' && (i += 2))
		if (format[i] == 'd' || format[i] == 'i')
		{
			tmp = NULL;
			if (!(str = ft_itoa(va_arg(ap, __int32_t), tmp)))
				return (FALSE);
			free(tmp);
			tab[1] = str[0] == '-' ? tab[1] + 1 : tab[1];
			if (tab[1] > ft_strlen(str))
			{
				tab[1] = tab[1] - ft_strlen(str);
				while (tab[1] > 0)
				{
					str = ft_j(str, "0\0");
					tab[1]--;
				}
			}
			ft_putstr(str, -1, CHAMP);
			free(str);
			str = NULL;
		}
		else if (format[i] == 'o')
			ft_putoct_int(va_arg(ap, __int32_t), tab[1], CHAMP);
		else if (format[i] == 'u')
		{
			tmp = NULL;
			if (!(str = ft_itoa_unsi(va_arg(ap, __uint32_t), tmp)))
				return (FALSE);
			if (tab[1] > ft_strlen(str))
			{
				tab[1] = tab[1] - ft_strlen(str);
				while (tab[1] > 0)
				{
					str = ft_j(str, "0\0");
					tab[1]--;
				}
			}
			ft_putstr(str, -1, CHAMP);
			free(str);
			str = NULL;
		}
		else if (format[i] == 'x' || format[i] == 'X')
			ft_x(va_arg(ap, __uint32_t), format[i] - 23, tab[1],
			CHAMP);
		else
			return (FALSE);
	else if (format[i] == 'h' && i++)
		if (format[i] == 'd' || format[i] == 'i')
		{
			tmp = NULL;
			if (!(str = ft_itoa(va_arg(ap, __int32_t), tmp)))
				return (FALSE);
			free(tmp);
			tab[1] = str[0] == '-' ? tab[1] + 1 : tab[1];
			if (tab[1] > ft_strlen(str))
			{
				tab[1] = tab[1] - ft_strlen(str);
				while (tab[1] > 0)
				{
					str = ft_j(str, "0\0");
					tab[1]--;
				}
			}
			ft_putstr(str, -1, CHAMP);
			free(str);
			str = NULL;
		}
		else if (format[i] == 'o')
			ft_putoct_int(va_arg(ap, __int32_t), tab[1], CHAMP);
		else if (format[i] == 'u')
		{
			tmp = NULL;
			if (!(str = ft_itoa_unsi(va_arg(ap, __uint32_t), tmp)))
				return (FALSE);
			if (tab[1] > ft_strlen(str))
			{
				tab[1] = tab[1] - ft_strlen(str);
				while (tab[1] > 0)
				{
					str = ft_j(str, "0\0");
					tab[1]--;
				}
			}
			ft_putstr(str, -1, CHAMP);
			ft_memdel(str);
		}
		else if (format[i] == 'x' || format[i] == 'X')
			ft_x(va_arg(ap, __uint32_t), format[i] - 23, tab[1],
			CHAMP);
		else
			return (FALSE);
	else if ((format[i] == 'l' && format[i + 1] == 'l' && (i += 2))
	|| (format[i] == 'l' && i++))
		if (format[i] == 'd' || format[i] == 'i')
		{
			tmp = NULL;
			if (!(str = ft_itoa_long(va_arg(ap, __int64_t), tmp, 0)))
				return (FALSE);
			free(tmp);
			tab[1] = str[0] == '-' ? tab[1] + 1 : tab[1];
			if (tab[1] > ft_strlen(str))
			{
				tab[1] = tab[1] - ft_strlen(str);
				while (tab[1] > 0)
				{
					str = ft_j(str, "0\0");
					tab[1]--;
				}
			}
			ft_putstr(str, -1, CHAMP);
			free(str);
			str = NULL;
		}
		else if (format[i] == 'o')
			ft_putoct_long(va_arg(ap, __uint64_t),
			tab[1], CHAMP);
		else if (format[i] == 'u')
			ft_putnbr_long_unsi(va_arg(ap, __uint64_t));
		else if (format[i] == 'x' || format[i] == 'X')
			ft_puthex_long(va_arg(ap, __uint64_t),
			format[i] - 23);
		else
			return (FALSE);
	else if (format[i] == '%')
		ft_putstr("%", -1, CHAMP);
	else
		return (FALSE);
	return (i);
}
