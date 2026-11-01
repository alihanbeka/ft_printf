#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				count += ft_print_char((char)va_arg(args, int));
			else if (format[i + 1] == 's')
				count += ft_print_str(va_arg(args, char *));
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				count += ft_print_nbr(va_arg(args, int));
			else if (format[i + 1] == 'u')
				count += ft_print_unsigned(va_arg(args, unsigned int));
				else if (format[i + 1] == 'x' || format[i + 1] == 'X')
				count += ft_print_hex(va_arg(args, unsigned int), format[i + 1]);
			i++;
		}
		else
			count += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}