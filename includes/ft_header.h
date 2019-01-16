/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 09:51:54 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/16 12:25:55 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# define TRUE 1
# define FALSE 0

# include <stdio.h>
# include <string.h>

void		ft_putchar(__int8_t c);
void		ft_putstr(char *str, __int32_t *tab);
void		ft_putnbr_int(__int32_t nbr);
void		ft_putnbr_unsi(__uint32_t nbr);
void		ft_putnbr_short(__int16_t nbr);
void		ft_putnbr_short_unsi(__uint16_t nbr);
void		ft_putnbr_long(__int64_t nbr);
void		ft_putnbr_long_unsi(__uint64_t nbr);
void		ft_putnbr_float1(long double nbr, __int32_t *tab);
void		ft_putnbr_float1_suite(char *str, __int32_t *tab,
	__int32_t j);
void		ft_putnbr_float2(long double nbr);
void		ft_putnbr_float_ld1(long double nbr, __int32_t *tab);
void		ft_putnbr_float_ld2(long double nbr);
__int32_t	ft_x_p(__int32_t nb, __int32_t *tab);
__int32_t	ft_x(__uint32_t nb, __int32_t letter, __int32_t *tab);
__int32_t	ft_puthex_short(__uint16_t nb, __int32_t letter);
__int32_t	ft_puthex_long(__uint64_t nb, __int32_t letter, __int32_t *tab);
__int32_t	ft_strlen(char *str);
__int32_t	ft_atoi(const char *str);
__int32_t	ft_putoct_int(__uint32_t nb, __int32_t *tab);
__int32_t	ft_putoct_short(__uint16_t nb, __int32_t *tab);
__int32_t	ft_putoct_long(__uint64_t nb, __int32_t *tab);
char		*ft_strcpy(char *s1, const char *s2);
char		*ft_strrev(char *str);
char		*ft_itoa(__int32_t nb, char *str);
char		*ft_itoa_long(__int64_t nb, char *str, __uint8_t unb);
char		*ft_itoa_unsi(__uint32_t nb, char *str);
char		*ft_itoa_float(__int64_t nb, char *str);
char		*ft_preci_int(char *s1, char *s2);
void		ft_memdel(char *str);

//__int32_t	ft_printf_point(__int32_t *tab, va_list ap,
//	const char *restrict format, __int32_t i);
void		ft_c(__int32_t *tab, va_list ap);
void		ft_u(va_list ap, __int32_t *tab);
__int32_t	ft_hh(__int32_t *tab, va_list ap, const char *restrict format,
	__int32_t i);
__int32_t	ft_h(__int32_t *tab, va_list ap, __int8_t k);
char		*ft_itoa_short(__int32_t nb, char *str);
__int32_t	ft_ll(__int32_t *tab, va_list ap, const char *restrict format,
	__int32_t i);
__int32_t	ft_csp(__int32_t *tab, va_list ap, __int8_t k);
__int32_t	ft_diouxx(__int32_t *tab, va_list ap, __int8_t k);
__int32_t	ft_hhll(__int32_t *tab, va_list ap, const char *restrict format,
	__int32_t i);
__int32_t	ft_lhl(__int32_t *tab, va_list ap, __int8_t k);
__int32_t	ft_cspdiouxxhhllhll(__int32_t *tab, va_list ap,
	const char *restrict format, __int32_t i);
__int32_t	ft_check_flag(const char *restrict format,
	__int32_t i, __int32_t *tab, va_list ap);
__int32_t	ft_strcmp(char *s1, char *s2);
void		ft_d_i_(va_list ap, __int32_t *tab);
void		ft_d_i_long(va_list ap, __int32_t *tab);
char		*ft_itoa_unsi_long(__uint64_t nb, char *str);
void		ft_u_long(va_list ap, __int32_t *tab);

#endif
