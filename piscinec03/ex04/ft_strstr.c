		/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:53:19 by osarsar           #+#    #+#             */
/*   Updated: 2022/06/20 19:53:20 by osarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0' && len > 0)
	{
	j = 0;
	k = i;
		while (str[k] == to_find[j] && str[k] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
				j++;
				k++;
		}
		i++;
		len--;
	}
	return (0);
}

int main ()
{
	char *str = "oussama";
	char *dest = "m";
	printf("%s\n", ft_strnstr(str, dest, 6));
}
