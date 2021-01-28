/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_charsrc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:10:15 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:10:15 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charsrc(const char *str, char c)
{
	int	i;

	if (str == NULL || *str == 0)
		return (-1);
	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}
