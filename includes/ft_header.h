#ifndef FT_HEADER_H
# define FT_HEADER_H

# define TRUE 1
# define FALSE 0

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr, int choix);
void	ft_putnbr_float1(double nbr, int arrondi);
void	ft_putnbr_float2(double nbr);
void	ft_putnbr_float_ld1(long double nbr, int arrondi);
void	ft_putnbr_float_ld2(long double nbr);
int		ft_deci_hexa(int nb);
int		ft_deci_hexa_un(int nb, int letter);
int		ft_strlen(char *str);
int		ft_atoi(const char *str);
int		ft_deci_octal(unsigned int nb);
char	*ft_strrev(char *str);
char	*ft_itoa(int nb);

#endif