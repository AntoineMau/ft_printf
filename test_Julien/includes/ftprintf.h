/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 14:49:04 by judumay           #+#    #+#             */
/*   Updated: 2019/01/21 16:26:47 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

# include <stdarg.h>
# include <wchar.h>
# include "../libft/libft.h"

enum						e_printf_modifier
{
	FT_PRINTF_NO_MODIFIERS,
	FT_PRINTF_H,
	FT_PRINTF_HH,
	FT_PRINTF_L,
	FT_PRINTF_LL
};

enum						e_printf_conv
{
	NO_INPUT,
	FT_PRINTF_C,
	FT_PRINTF_D,
	FT_PRINTF_O,
	FT_PRINTF_P,
	FT_PRINTF_S,
	FT_PRINTF_U,
	FT_PRINTF_X,
	FT_PRINTF_XX,
	FT_PRINTF_F,
	FT_PRINTF_PERCENT
};

typedef struct				s_printf_flags
{
	int						hash;
	int						zero;
	int						less;
	int						space;
	int						plus;
}							t_printf_flags;

typedef struct				s_printf
{
	va_list					ap;
	int						error;
	int						index;
	int						ret;
	char					tmpchar;
	char					pad_0[3];
	char					*conv_ret;
	int						champ;
	int						precision;
	t_printf_flags			*flags;
	enum e_printf_modifier	modifier;
	enum e_printf_conv		conv;
	struct s_printf			*(*tab_ptr[11])(struct s_printf *p);
}							t_printf;

int							ft_printf(char *format, ...);
void						reset_t_printf(t_printf *p);
void						del_t_printf(t_printf *p);
void						ft_printf_display(t_printf *p, const char *format);
void						ft_printf_get_conv(t_printf *p, const char *format);
void						ft_printf_get_modifier(t_printf *p, const char *format);
void						ft_printf_get_flag(t_printf *p, const char *format);
void						ft_printf_get_precision(t_printf *p, const char *format);
void						ft_printf_get_champ(t_printf *p, const char *format);
t_printf					*ft_printf_parsing(t_printf *p, const char *format);
t_printf					*init_t_printf(t_printf *p);
t_printf					*ft_printf_conv(t_printf *p);
t_printf					*ft_printf_s(t_printf *p);
t_printf					*ft_printf_p(t_printf *p);
t_printf					*ft_printf_d(t_printf *p);
t_printf					*ft_printf_o(t_printf *p);
t_printf					*ft_printf_u(t_printf *p);
t_printf					*ft_printf_x(t_printf *p);
t_printf					*ft_printf_c(t_printf *p);
t_printf					*ft_printf_percent(t_printf *p);
t_printf					*ft_printf_no_conv(t_printf *p);
t_printf					*ft_printf_f(t_printf *p);

#endif