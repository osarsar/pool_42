/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:26:00 by osarsar           #+#    #+#             */
/*   Updated: 2022/06/19 11:26:01 by osarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_power(int nb, int power, int result)
{
	if (power > 0)
	{
		result = result * nb;
		power--;
		return (ft_power(nb, power, result));
	}
	return (result);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	return (ft_power(nb, power, 1));
}
