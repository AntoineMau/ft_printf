#ifndef FT_HEADER_H
# define FT_HEADER_H

# define TRUE 1
# define FALSE 0

#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str, int preci, int champ);
void	ft_putnbr_int(int nbr, int choix);
void	ft_putnbr_short(short nbr, int choix);
void	ft_putnbr_long(long nbr, int choix, int champ);
void	ft_putnbr_long_long(long long nbr, int choix);
void	ft_putnbr_float1(double nbr, int preci, int champ);
void	ft_putnbr_float2(double nbr);
void	ft_putnbr_float_ld1(long double nbr, int preci);
void	ft_putnbr_float_ld2(long double nbr);
int		ft_puthex_int_p(int nb, int champ);
char	*ft_puthex_int(int nb, int letter);
int		ft_puthex_short(short nb, int letter);
int		ft_puthex_long(long nb, int letter);
int		ft_puthex_long_long(long long nb, int letter);
int		ft_strlen(char *str);
int		ft_atoi(const char *str);
char	*ft_putoct_int(unsigned int nb);
int		ft_putoct_short(unsigned short int nb);
int		ft_putoct_long(unsigned long int nb);
int		ft_putoct_long_long(unsigned long long int nb);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strrev(char *str);
char	*ft_itoa(int nb);

#endif