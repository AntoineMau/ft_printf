#include "../includes/ftprintf.h"

int main(void)
{
ft_printf("\n");
printf("\n");

ft_printf("%%\n");
printf("%%\n");

ft_printf("%d\n", 42);
printf("%d\n", 42);

ft_printf("%d%d\n", 42, 41);
printf("%d%d\n", 42, 41);

ft_printf("%d%d%d\n", 42, 43, 44);
printf("%d%d%d\n", 42, 43, 44);

ft_printf("%ld\n", 2147483647);
printf("%ld\n", 2147483647);

ft_printf("%lld\n", 9223372036854775807);
printf("%lld\n", 9223372036854775807);

ft_printf("%lld\n", 9223372036854775807);
printf("%lld\n", 9223372036854775807);

ft_printf("%x\n", 505);
printf("%x\n", 505);

ft_printf("%X\n", 505);
printf("%X\n", 505);

ft_printf("%p\n", &ft_printf);
printf("%p\n", &ft_printf);

ft_printf("%20.15d\n", 54321);
printf("%20.15d\n", 54321);

ft_printf("%-10d\n", 3);
printf("%-10d\n", 3);

ft_printf("% d\n", 3);
printf("% d\n", 3);

ft_printf("%+d\n", 3);
printf("%+d\n", 3);

ft_printf("%010d\n", 1);
printf("%010d\n", 1);

ft_printf("%hhd\n", 0);
printf("%hhd\n", 0);

ft_printf("%\n");
printf("%\n");

ft_printf("%u\n", 4294967295);
printf("%u\n", 4294967295);

ft_printf("%o\n", 40);
printf("%o\n", 40);

ft_printf("%%#08x\n", 42);
printf("%%#08x\n", 42);

ft_printf("%x\n", 1000);
printf("%x\n", 1000);

ft_printf("%#X\n", 1000);
printf("%#X\n", 1000);

ft_printf("%s\n", NULL);
printf("%s\n", NULL);

ft_printf("%s%s\n", "test", "test");
printf("%s%s\n", "test", "test");

ft_printf("%s%s%s\n", "test", "test", "test");
printf("%s%s%s\n", "test", "test", "test");
	return (0);
}