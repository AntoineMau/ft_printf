#ifndef FT_HEADER_H
# define FT_HEADER_H

# define TRUE 1
# define FALSE 0

#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str, int arron);
void	ft_putnbr_int(int nbr, int choix);
void	ft_putnbr_short(short nbr, int choix);
void	ft_putnbr_float1(double nbr, int arron);
void	ft_putnbr_float2(double nbr);
void	ft_putnbr_float_ld1(long double nbr, int arron);
void	ft_putnbr_float_ld2(long double nbr);
int		ft_deci_hexa(int nb);
int		ft_puthex_int(int nb, int letter);
int		ft_strlen(char *str);
int		ft_atoi(const char *str);
int		ft_putoct_int(unsigned int nb);
int		ft_putoct_short(unsigned short int nb);
char	*ft_strrev(char *str);
char	*ft_itoa(int nb);

#endif