/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 19:34:26 by eneto             #+#    #+#             */
/*   Updated: 2018/04/04 22:36:10 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *ptr;
	int i;

	i = min;
	if (min >= max)
		return (NULL);
	if (!(ptr = (int *)malloc(sizeof(int) * (int)(max - min + 1))))
		return (ptr);
	else
	{
		while (i < max)
		{
			*(ptr + (int)(i - min)) = i;
			i++;
		}
		return (ptr);
	}
}
