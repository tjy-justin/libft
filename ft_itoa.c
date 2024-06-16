#include "libft.h"

static int	int_len(long nbr);
static char	*nbr_loc(int len);

// opposite of atoi(), convert num to str
// alloc mem by counting strlen
// as with putnbr(), convert by % 10, / 10

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	long	nbr;
	char	*res;

	// long handles int min max
	nbr = n;
	len = int_len(nbr);
	res = nbr_loc(len);
	if (!res)
		return (NULL);
	// convert last digit until first
	while (nbr)
	{
		res[i] = ((nbr % 10) + '0');
		nbr /= 10;
		i--;
	}
}

// counts int len
static int	int_len(long nbr)
{
	int	n;

	n = 0;
	// handles -
	if (nbr < 0)
	{
		n++;
		nbr *= -1;
	}
	if (nbr == 0)
		n++;
	// /= until reaches 0
	while (nbr != 0)
	{
		nbr /= 10;
		n++;
	}
	return (n);
}

// alloc mem for nbr
static char	*nbr_loc(int len)
{
	char *arr;

	arr = malloc((len + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	// init 1st char
	arr[0] = 0;
	return (arr);
}