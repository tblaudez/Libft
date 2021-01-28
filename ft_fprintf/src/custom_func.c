/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   custom_func.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 14:54:12 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 14:54:12 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

int	ft_unbrdig(uintmax_t nbr, int base)
{
	int	i;

	i = 0;
	while (nbr)
	{
		nbr /= base;
		i++;
	}
	return (i);
}

char	*ft_uitoabase(uintmax_t nbr, int base)
{
	char	*str;
	int		i;

	i = ft_unbrdig(nbr, base);
	str = ft_strnew(i);
	while (i-- > 0)
	{
		if ((nbr % base) > 9)
			str[i] = (nbr % base) + 'a';
		else
			str[i] = (nbr % base) + '0';
		nbr /= base;
	}
	return (str);
}
