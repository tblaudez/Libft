/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoabase.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:10:44 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:10:44 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoabase(intmax_t nbr, int base)
{
	char		*str;
	size_t		i;
	const bool	neg = (nbr < 0);

	if (base == 10)
		return (ft_itoa(nbr));
	if (nbr < 0)
		nbr = -nbr;
	i = ft_nbrdig(nbr, base);
	str = ft_strnew(i);
	while (i-- > 0)
	{
		if ((nbr % base) > 9)
			str[i] = (nbr % base) + 'a';
		else
			str[i] = (nbr % base) + '0';
		nbr /= base;
	}
	if (neg)
		return (ft_strjoinfree("-", str, 0, 1));
	return (str);
}
