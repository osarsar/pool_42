/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:32:28 by osarsar           #+#    #+#             */
/*   Updated: 2022/06/30 17:32:30 by osarsar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_BOOLEAN_H
# define	FT_BOOLEAN_H

# include<unistd.h>

# define	TRUE 1
# define	FALSE 0
# define	SUCCESS 0
# define	EVEN(nbr) ((nbr % 2) == 0 ? TRUE : FALSE)

# define	EVEN _MSG	"i have an even number of arguments.\n"
# define	ODD_MSG	"i have an odd number of arguments.\n"

typedef int	t_bool;
void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
