/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 09:04:15 by judumay           #+#    #+#             */
/*   Updated: 2019/01/21 14:45:18 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"


//static void		*ft_flags(t_printf *p)
//{
//	p->flags[0] = &ft_c;
//	p->flags[1] = &ft_s;
//	p->flags[2] = &ft_p;
//	p->flags[3] = &ft_d_i;
//	p->flags[4] = &ft_o;
//	p->flags[5] = &ft_u;
//	p->flags[6] = &ft_x;
//	p->flags[7] = &ft_f;
//	p->flags[8] = &ft_percent;
//	p->flags[9] = &ft_printf_no_conv;
//}

void		ft_printf_flags(t_printf *p)
{
	while (p->format[p->i]
		&& !(ft_strrchr("cspdiouxXf%", p->format[p->i])))
	{
		if (ft_strrchr("hlL", p->format[p->i]))
			ft_printf_get_modifier(p);
		else if (ft_strrchr("#0-+ ", p->format[p->i]))
			ft_printf_get_flag(p);
		else if (p->format[p->i] == '.' && ++p->i)
			ft_printf_get_preci(p);
		else if (ft_isdigit((int)p->format[p->i]))
			ft_printf_get_number(p);
		else
			break ;
	}
}

char		*ft_suite(t_printf *p)
{
	ft_printf_flags(p);
	if (p->conv == FT_PRINTF_NO_MODIFIERS)
		p->tmpchar = p->format[p->i];
	p = ft_printf_conv(p);
	++p->i;

	//ft_reset(p);
	return (p->tmpchar);
}

void		ft_checkflags(t_printf *p)
{
	size_t		buf;

	while (p->format[p->i])
	{
		buf = ft_strclen(&p->pformat[p->i], '%');
		write(1, &p->format[p->i], buf);
		p->ret += buf;
		p->i += buf;
		if (p->format[p->i] == '%')
		{
			if (!p->format[++p->i])
				break ;
			p = ft_printf_parsing(p);
			p = ft_printf_conv(p);
			reset_t_printf(p);
		}
	}



		/*
		if (p->format[p->i] == '%' && ++p->i)
			p->result = ft_strjoin(p->result, ft_suite(p));
		else
			p->result = ft_strj(p->result, p->format[p->i]);
		p->i++;
	}
	p->length += ft_strlen(p->result);
	dprintf(1, "%d", p->champ);
}
