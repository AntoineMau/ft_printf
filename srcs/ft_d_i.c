/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:07:10 by judumay           #+#    #+#             */
/*   Updated: 2019/01/14 17:45:50 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

__int32_t	ft_strcmp(char *s1, char *s2)
{
	__int32_t	i;

	i = 0;
	while ((s1[i] && s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void		ft_d_i(va_list ap, __int32_t champ)
{
	char	*tmp;
	char	*str;

	str = NULL;
	tmp = NULL;
	if (!(str = ft_itoa(va_arg(ap, __int32_t), tmp)))
		return ;
	ft_putstr(str, -1, champ);
	if (ft_strcmp(str, "-2147483648") != 0)
		free(str);
}

void		ft_d_i_(va_list ap, __int32_t champ, __int32_t preci)
{
	char		*str;
	char		*tmp;

	tmp = NULL;
	if (!(str = ft_itoa(va_arg(ap, __int32_t), tmp)))
		return ;
	free(tmp);
	preci = str[0] == '-' ? preci + 1 : preci;
	if (preci > ft_strlen(str))
	{
		preci = preci - ft_strlen(str);
		while (preci > 0)
		{
			tmp = strdup(str);
			if (ft_strcmp(str, "-2147483648") != 0)
				ft_memdel(str);
			str = ft_preci_int(tmp, "0\0");
			ft_memdel(tmp);
			preci--;
		}
	}
	ft_putstr(str, -1, champ);
	ft_memdel(str);
}
