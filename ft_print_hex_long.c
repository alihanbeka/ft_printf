#include "ft_printf.h"

int	ft_print_hex_long(unsigned long n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		count += ft_print_hex_long(n / 16);
	count += ft_print_char(base[n % 16]);
	return (count);
}