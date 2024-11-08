int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	is_neg;

	i = 0;
	result = 0;
	is_neg = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		i++;
		is_neg = -1;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result = (10 * result) + (str[i] - 48);
		i++;
	}
	return (result * is_neg);
}
