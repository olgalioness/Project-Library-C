#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	const int base = 10;

	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n < base)
		ft_putchar_fd(n + '0', fd);
	if (n >= base)
	{
		ft_putnbr_fd(n / base, fd);
		ft_putchar_fd(n % base + '0', fd);
	}
}
