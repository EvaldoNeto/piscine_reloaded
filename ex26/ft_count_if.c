/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 19:51:09 by eneto             #+#    #+#             */
/*   Updated: 2018/04/04 19:51:10 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
