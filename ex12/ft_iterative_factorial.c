int		ft_iterative_factorial(int nb)
{
	int	result;
	long int aux;

	aux = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
	  return (1);
	else
	{
		while (nb > 1)
		{
		  aux = (long int)result * (long int)nb;
			result = result * nb;
			nb--;
			if(aux > result)
			  return (0);
		}
		return (result);
	}
}
