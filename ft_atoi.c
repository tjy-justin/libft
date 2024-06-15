#include "libft.h"

// Skipping Leading White Spaces
// whitespaces is 9 to 13
// handle space itself

// Handling Optional Sign
// convert string - to int -

// Parsing Numerical Digits
// convert by - '0'
// * 10 as we move from one digit to another

int	atoi(const char *str)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	// skips whitespace
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (sign * num);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	int num1 = ft_atoi(argv[1]);

	printf("%d\n", num1);
	return (0);
}