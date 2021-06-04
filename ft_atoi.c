#include "libft.h"

static	int	calculate_nb(const char *str, int mult)
{
	int	res;

	res = 0;
	while (ft_isdigit(*str))
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (mult * res);
}

int	ft_atoi(const char *str)
{
	int	mult;
	int	bool_first;

	mult = 1;
	bool_first = 1;
	while (*str != '\0')
	{
		if (*str == '-' && bool_first)
		{
			mult = -1;
			bool_first = 0;
		}
		else if (*str == '+' && bool_first)
			bool_first = 0;
		else if (ft_isdigit(*str))
			return (calculate_nb(str, mult));
		else if (!(ft_iswhitespace(*str) && bool_first))
			return (0);
		str++;
	}
	return (0);
}
