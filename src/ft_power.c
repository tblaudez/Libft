/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_power.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:11:10 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:11:10 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

intmax_t	ft_power(intmax_t nbr, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		nbr *= ft_power(nbr, --power);
	return (nbr);
}
