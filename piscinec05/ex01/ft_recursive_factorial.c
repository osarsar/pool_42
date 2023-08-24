/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:00:43 by osarsar           #+#    #+#             */
/*   Updated: 2022/06/19 11:00:44 by osarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fact(int fact, int nb)
{
	fact = fact * nb;
	nb--;
	if (nb > 0)
		return (ft_fact(fact, nb));
	return (fact);
}

int	ft_recursive_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
		fact = ft_fact(1, nb);
	return (fact);
}
