/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:10:46 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:10:46 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(intmax_t nbr)
{
	char		*str;
	const bool	neg = (nbr < 0);
	size_t		i;

	if (nbr < 0)
		nbr = -nbr;
	i = ft_nbrdig(nbr, 10);
	str = ft_strnew(i);
	while (i-- > 0)
	{
		str[i] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (neg)
		return (ft_strjoinfree("-", str, 0, 1));
	return (str);
}
