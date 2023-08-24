/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:58:00 by osarsar           #+#    #+#             */
/*   Updated: 2022/06/21 23:27:19 by osarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ds;
	unsigned int	ss;

	i = 0;
	j = 0;
	ds = 0;
	ss = 0;
	while (dest[ds])
		ds++;
	while (src[ss])
		ss++;
	if (size <= ds)
		return (size + ss);
	j = size - ds - 1;
	while (src[i] && i < j)
	{
		dest[ds + i] = src[i];
		i++;
	}
	dest[ds + i] = '\0';
	return (ds + ss);
}
