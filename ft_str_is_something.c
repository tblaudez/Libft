/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_something.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <tblaudez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 11:07:07 by tblaudez          #+#    #+#             */
/*   Updated: 2018/10/08 12:18:19 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_something(const char *str, int (*f)(int c))
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!f(str[i]))
			return (0);
		i++;
	}
	return (1);
}
