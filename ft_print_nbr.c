#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	long	num;
	int		count;
	char	c;

	num = n;
	count = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		count++;
	}
	if (num >= 10)
		count += ft_print_nbr(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}