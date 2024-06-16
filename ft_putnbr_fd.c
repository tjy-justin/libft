#include "libft.h"

// like putnbr()
// write int on defined file descriptor as char
// cases: min int -2147483648, < 0, >= 10

void	ft_putnbr_fd(int n, int fd)
{
	if (n = -2147483648)
		ft_putstr_fd(fd, "-2147483648", 1);
	// putchar -, neutralize int -
	if (n < 0)
	{
		ft_putchar_fd(fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}