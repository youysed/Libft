
#include "libft.h"

static int	itoa_isnegative(int *n)
{
	if (*n < 0)
	{
		*n = *n * -1;
		return (1);
	}
	return (0);
}

static int	count_len(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	int		negative;
	char	*str;

	if (n == (-2147483648))
		return (ft_strdup("-2147483648"));
	negative = itoa_isnegative(&n);
	len = count_len(n) + negative;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
/*int main()
{
	printf("%s",ft_itoa(145263565));
}*/