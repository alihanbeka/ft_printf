#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	unsigned long	address;
	int				count;

	address = (unsigned long)ptr;
	count = 0;
	count += ft_print_str("0x");
	count += ft_print_hex_long(address);
	return (count);
}