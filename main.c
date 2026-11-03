#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	x;

	x = 42;

	printf("---- CHAR ----\n");
	printf("printf    : [%c]\n", 'A');
	ft_printf("ft_printf : [%c]\n", 'A');

	printf("\n---- STRING ----\n");
	printf("printf    : [%s]\n", "Alihan");
	ft_printf("ft_printf : [%s]\n", "Alihan");
	ft_printf("NULL      : [%s]\n", NULL);

	printf("\n---- DECIMAL ----\n");
	printf("printf    : [%d] [%d] [%d]\n", 42, -42, 0);
	ft_printf("ft_printf : [%d] [%d] [%d]\n", 42, -42, 0);

	printf("\n---- INT LIMITS ----\n");
	printf("printf    : [%d] [%d]\n", INT_MAX, INT_MIN);
	ft_printf("ft_printf : [%d] [%d]\n", INT_MAX, INT_MIN);

	printf("\n---- UNSIGNED ----\n");
	printf("printf    : [%u] [%u]\n", 0u, UINT_MAX);
	ft_printf("ft_printf : [%u] [%u]\n", 0u, UINT_MAX);

	printf("\n---- HEX ----\n");
	printf("printf    : [%x] [%X]\n", 255, 255);
	ft_printf("ft_printf : [%x] [%X]\n", 255, 255);

	printf("\n---- POINTER ----\n");
	printf("printf    : [%p]\n", (void *)&x);
	ft_printf("ft_printf : [%p]\n", (void *)&x);
	printf("printf NULL    : [%p]\n", NULL);
	ft_printf("ft_printf NULL : [%p]\n", NULL);

	printf("\n---- PERCENT ----\n");
	printf("printf    : [100%%]\n");
	ft_printf("ft_printf : [100%%]\n");

	printf("\n---- RETURN VALUE ----\n");
	printf("printf return    : %d\n", printf("ABC"));
	printf("\n");
	printf("ft_printf return : %d\n", ft_printf("ABC"));
	printf("\n");

	return (0);
}