/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 15:23:25 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/21 14:44:29 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H 
# define PRINTF_H

# define TRUE 1
# define FALSE 0

#include <stdarg.h>

# include <stdio.h>
# include <string.h>
# include <stdint.h>
// penser au __

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
	FT_PRINTF_WAIT_INPUT,
	FT_PRINTF_C,
	FT_PRINTF_D,
	FT_PRINTF_O,
	FT_PRINTF_P,
	FT_PRINTF_S,
	FT_PRINTF_U,
	FT_PRINTF_X,
	FT_PRINTF_XX,
	FT_PRINTF_PERCENT
};

typedef struct	s_printf
{
	uint16_t		zero;
	uint16_t		plus;
	uint16_t		minus;
	uint16_t		space;
	uint16_t		hash;
	uint16_t		champ;
	int16_t		preci;
	uint32_t	length;
	uint32_t	i;
	int			ret;
	char		*format;
	char		*tmpchar;
	va_list		ap;
	enum e_printf_modifier	modifier;
	enum e_printf_conv		conv;
	struct s_printf			*(*tab_ptr[19])(struct s_printf *p);
}				t_printf;

int32_t			ft_strlen(char *str);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strrev(char *str);
char			*ft_strdup(const char *s1);
void			ft_putchar(__int8_t c);
void			ft_memdel(char *str);
int32_t			ft_strcmp(char *s1, char *s2);
char			*ft_strj(char *s1, char c);
int				ft_isdigit(int c);
char			*ft_strrchr(const char *s, int c);
__int32_t		ft_atoi(char *str);

void			ft_checkflags(t_printf *p);
static void		*ft_flags(t_printf *p);
char			*ft_suite(t_printf *p);
void			ft_printf_flags(t_printf *p);
void			ft_printf_get_modifier(t_printf *p);
void			ft_printf_get_flag(t_printf *p);
void			ft_printf_get_number(t_printf *p);
void			ft_printf_get_preci(t_printf *p);
void			ft_printf_get_conv(t_printf *p);
static void		ft_pritnf_get_conv2(t_printf *p);
t_printf		*ft_printf_conv(t_printf *p);

void			ft_d_i_(t_printf *p);

char			*ft_itoa_unsi(__uint32_t nb, char *str);
char			*ft_itoa(__int32_t nb, char *str);
char			*ft_itoa_short(__int32_t nb, char *str);
char			*ft_itoa_long(__int64_t nb, char *str, __uint8_t neg);
char			*ft_itoa_unsi_long(__uint64_t nb, char *str);

#endif