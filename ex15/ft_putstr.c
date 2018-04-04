/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 19:17:42 by eneto             #+#    #+#             */
/*   Updated: 2018/04/04 21:10:01 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char str);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}