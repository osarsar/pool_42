/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 15:47:37 by osarsar           #+#    #+#             */
/*   Updated: 2022/06/19 15:47:39 by osarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_name(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i >= 1)
	{
		ft_name(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
