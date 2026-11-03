#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int	count;

	if (!ptr)
		return (ft_print_str("(nil)"));
	count = 0;
	count += ft_print_str("0x");
	count += ft_print_hex_long((unsigned long)ptr);
	return (count);
}