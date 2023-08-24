/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:44:01 by osarsar           #+#    #+#             */
/*   Updated: 2022/06/22 00:00:33 by osarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar ('-');
		n = nb * -1;
	}
	else
		n = nb;
	if (n >= 0 && n < 10)
	{
		ft_putchar (n + '0');
	}
	else
	{
		ft_putnbr (n / 10);
		ft_putchar (n % 10 + '0');
	}
}
