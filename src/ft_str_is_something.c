/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_something.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:33:27 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:33:27 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_something(const char *str, int (*f)(int))
{
	int	i;

	i = -1;
	while (str[++i])
		if (!f(str[i]))
			return (0);
	return (1);
}
