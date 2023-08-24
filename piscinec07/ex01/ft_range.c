/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:49:37 by osarsar           #+#    #+#             */
/*   Updated: 2022/06/19 20:49:39 by osarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*str;

	if (min >= max)
		return (0);
	i = 0;
	size = max - min;
	if (!size)
		return (0);
	str = (int *) malloc (sizeof (int) * size);
	while (i <= size)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
