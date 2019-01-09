#ifndef FT_HEADER_H
# define FT_HEADER_H

# define TRUE 1
# define FALSE 0

#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str, int preci, int champ);
void	ft_putnbr_int(int nbr);
void	ft_putnbr_unsi(unsigned int nbr);
void	ft_putnbr_short(short int nbr);
void	ft_putnbr_short_unsi(short unsigned int nbr);
void	ft_putnbr_long(long long int nbr);
void	ft_putnbr_long_unsi(long long unsigned int nbr);
void	ft_putnbr_float1(double nbr, int preci, int champ);
void	ft_putnbr_float1_suite(char *str, int preci, int champ, int j);
void	ft_putnbr_float2(double nbr);
void	ft_putnbr_float_ld1(long double nbr, int preci);
void	ft_putnbr_float_ld2(long double nbr);
int		ft_puthex_int_p(int nb, int champ);
int		ft_puthex_int(unsigned int nb, int letter, int preci, int champ);
int		ft_puthex_short(short unsigned int nb, int letter);
int		ft_puthex_long(long long int nb, int letter);
int		ft_strlen(char *str);
int		ft_atoi(const char *str);
int		ft_putoct_int(unsigned int nb, int preci, int champ);
int		ft_putoct_short(short unsigned int nb, int preci);
int		ft_putoct_long(long long unsigned int nb);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strrev(char *str);
char	*ft_itoa(int nb, char *str);
char	*ft_itoa_unsi(unsigned int nb, char *str);
char	*ft_itoa_float(__int64_t nb, char *str);
char	*ft_preci_int(char *s1, char *s2);

#endif