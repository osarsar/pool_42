/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 23:57:00 by osarsar           #+#    #+#             */
/*   Updated: 2022/06/13 23:57:03 by osarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_combo(int n, int tab[])
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		ft_putchar(48 + tab[i]);
	i++;
	}
	i = n - 1;
	j = 0;
	while (i >= 0)
	{
		if (tab[i] == 9 - (n - 1 - i))
		{
		j++;
		}
	i--;
	}
	if (j != n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn_recursive(int n, int x, int tab[], int a)
{
	int	i;
	int	max;

	if (x == n)
	{
		ft_write_combo(n, tab);
	}
	else
	{
		max = 10 - (n - x);
		i = a + 1;
		while (i <= max)
		{
			tab[x] = i;
			ft_print_combn_recursive(n, x + 1, tab, i);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = 0;
		i++;
	}
	ft_print_combn_recursive(n, 0, tab, -1);
}
