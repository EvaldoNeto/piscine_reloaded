/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 19:05:00 by eneto             #+#    #+#             */
/*   Updated: 2018/04/04 19:15:10 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int			result;
	long int	aux;

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
			if (aux > result)
				return (0);
		}
		return (result);
	}
}
