int		ft_count_if(char **tab, int (*f)(char *))
{
	int counter;

	counter = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
			counter++;
		tab++;
	}
	return (counter);
}
