
int		ft_sqrt(int nb)
{
	int temp;

	if (nb >= 0)
	{
		temp = 1;
		while (temp * temp < nb)
			temp++;
		if (temp * temp == nb)
		  return (temp);
		else
		  return (0);
	}
	else
		return (0);
}
