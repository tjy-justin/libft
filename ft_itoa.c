#include "libft.h"

static int	ft_intlen(long nbr);
static char	*ft_nbrloc(int len);

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
	len = ft_intlen(nbr);
	res = ft_nbrloc(len);
	if (!res)
		return (NULL);
	// convert last digit until first
	while (nbr)
	{
		res[i] = ((nbr % 10) + '0');
		nbr /= 10;
		i--;
	}
	return (res);
}

// counts int len
static int	ft_intlen(long nbr)
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
static char	*ft_nbrloc(int len)
{
	char *arr;

	arr = malloc((len + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	// init 1st char
	arr[0] = 0;
	return (arr);
}