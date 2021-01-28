/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_nbrdig.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:11:08 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:11:08 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrdig(intmax_t nbr, int base)
{
	int	i;

	if (base == 0)
		return (-1);
	i = 0;
	while (nbr)
	{
		nbr /= base;
		i++;
	}
	return (i);
}
