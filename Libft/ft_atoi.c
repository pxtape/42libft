static int ft_isspace(char c)
{
	if (c == 32 || c == 9
		|| c == 10 || c == 13
		|| c == 12 || c == 11)
		return (1);
	return (0);
}

int	ft_atoi(const char *c)
{
	int	value;
	int	sign;

	value = 0;
	sign = 1;
	while (ft_isspace(*c))
		c++;
	if (*c == '-')
	{
		sign = -1;
		c++;
	}
	while (ft_isnum(*c))
	{
		value = value * 10 + sign * (*c - '0');
		c++;
	}
	return (value);
}