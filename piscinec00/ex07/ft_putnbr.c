/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:38:41 by osarsar           #+#    #+#             */
/*   Updated: 2022/06/09 17:11:30 by osarsar          ###   ########.fr       */
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
