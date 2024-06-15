#include "libft.h"

// skips whitespace & space
// convert str - to int -
// digit shifted left by * 10
// convert by - '0'

int	ft_atoi(const char *str)
{
	int res;
	int sign;
	int i;

	res = 0;
	sign = 1;
	i = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (sign * res);
}