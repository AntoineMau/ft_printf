/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_point.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:19:06 by judumay           #+#    #+#             */
/*   Updated: 2019/01/11 18:00:07 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

int	ft_printf_point(int champ, va_list ap, const char *restrict format, int i)
{
	int		preci;
	char	*tmp;
	char	*str;

	tmp = NULL;
	str = NULL;
	preci = ft_atoi(&format[i]);
	while (format[i] >= '0' && format[i] <= '9')
		i++;
	if (format[i] == 's')
		ft_putstr(va_arg(ap, char *), preci, champ);
	else if (format[i] == 'd' || format[i] == 'i')
	{
		tmp = NULL;
		if (!(str = ft_itoa(va_arg(ap, int), tmp)))
			return (FALSE);
		free(tmp);
		preci = str[0] == '-' ? preci + 1 : preci;
		if (preci > ft_strlen(str))
		{
			preci = preci - ft_strlen(str);
			while (preci > 0)
			{
				tmp = str;
				free(str);
				str = NULL;
				str = ft_preci_int(tmp, "0\0");
				free(tmp);
				tmp = NULL;
				preci--;
			}
		}
		ft_putstr(str, -1, champ);
		free(str);
		str = NULL;
	}
	else if (format[i] == 'o')
		ft_putoct_int(va_arg(ap, int), preci, champ);
	else if (format[i] == 'u')
	{
		tmp = NULL;
		if (!(str = ft_itoa_unsi(va_arg(ap, unsigned int), tmp)))
			return (FALSE);
		if (preci > ft_strlen(str))
		{
			preci = preci - ft_strlen(str);
			while (preci > 0)
			{
				str = ft_preci_int(str, "0\0");
				preci--;
			}
		}
		ft_putstr(str, -1, champ);
		free(str);
		str = NULL;
	}
	else if (format[i] == 'x' || format[i] == 'X')
		ft_x(va_arg(ap, unsigned int), format[i] - 23,
		preci, champ);
	else if (format[i] == 'f')
		ft_putnbr_float1(va_arg(ap, double), preci, 0);
	else if (format[i] == 'h' && format[i + 1] == 'h' && (i += 2))
		if (format[i] == 'd' || format[i] == 'i')
		{
			tmp = NULL;
			if (!(str = ft_itoa(va_arg(ap, int), tmp)))
				return (FALSE);
			free(tmp);
			preci = str[0] == '-' ? preci + 1 : preci;
			if (preci > ft_strlen(str))
			{
				preci = preci - ft_strlen(str);
				while (preci > 0)
				{
					str = ft_preci_int(str, "0\0");
					preci--;
				}
			}
			ft_putstr(str, -1, champ);
			free(str);
			str = NULL;
		}
		else if (format[i] == 'o')
			ft_putoct_int(va_arg(ap, int), preci, champ);
		else if (format[i] == 'u')
		{
			tmp = NULL;
			if (!(str = ft_itoa_unsi(va_arg(ap, unsigned int), tmp)))
				return (FALSE);
			if (preci > ft_strlen(str))
			{
				preci = preci - ft_strlen(str);
				while (preci > 0)
				{
					str = ft_preci_int(str, "0\0");
					preci--;
				}
			}
			ft_putstr(str, -1, champ);
			free(str);
			str = NULL;
		}
		else if (format[i] == 'x' || format[i] == 'X')
			ft_x(va_arg(ap, unsigned int), format[i] - 23, preci,
			champ);
		else
			return (FALSE);
	else if (format[i] == 'h' && i++)
		if (format[i] == 'd' || format[i] == 'i')
		{
			tmp = NULL;
			if (!(str = ft_itoa(va_arg(ap, int), tmp)))
				return (FALSE);
			free(tmp);
			preci = str[0] == '-' ? preci + 1 : preci;
			if (preci > ft_strlen(str))
			{
				preci = preci - ft_strlen(str);
				while (preci > 0)
				{
					str = ft_preci_int(str, "0\0");
					preci--;
				}
			}
			ft_putstr(str, -1, champ);
			free(str);
			str = NULL;
		}
		else if (format[i] == 'o')
			ft_putoct_int(va_arg(ap, int), preci, champ);
		else if (format[i] == 'u')
		{
			tmp = NULL;
			if (!(str = ft_itoa_unsi(va_arg(ap, unsigned int), tmp)))
				return (FALSE);
			if (preci > ft_strlen(str))
			{
				preci = preci - ft_strlen(str);
				while (preci > 0)
				{
					str = ft_preci_int(str, "0\0");
					preci--;
				}
			}
			ft_putstr(str, -1, champ);
			ft_memdel(str);
		}
		else if (format[i] == 'x' || format[i] == 'X')
			ft_x(va_arg(ap, unsigned int), format[i] - 23, preci,
			champ);
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
			preci = str[0] == '-' ? preci + 1 : preci;
			if (preci > ft_strlen(str))
			{
				preci = preci - ft_strlen(str);
				while (preci > 0)
				{
					str = ft_preci_int(str, "0\0");
					preci--;
				}
			}
			ft_putstr(str, -1, champ);
			free(str);
			str = NULL;
		}
		else if (format[i] == 'o')
			ft_putoct_long(va_arg(ap, long long unsigned int),
			preci, champ);
		else if (format[i] == 'u')
			ft_putnbr_long_unsi(va_arg(ap, long long unsigned int));
		else if (format[i] == 'x' || format[i] == 'X')
			ft_puthex_long(va_arg(ap, long long unsigned int),
			format[i] - 23);
		else
			return (FALSE);
	else if (format[i] == '%')
		ft_putstr("%", -1, champ);
	else
		return (FALSE);
	return (i);
}