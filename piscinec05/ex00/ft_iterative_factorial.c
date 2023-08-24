/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:58:22 by osarsar           #+#    #+#             */
/*   Updated: 2022/06/24 21:24:13 by osarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	fact = 1;
	while (i < nb + 1)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}
