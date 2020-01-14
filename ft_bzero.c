/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <tblaudez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 15:01:40 by tblaudez          #+#    #+#             */
/*   Updated: 2020/01/14 15:48:48 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t size)
{
	char	*dup;
	size_t	i;

	if (size <= 0 || ptr == NULL)
		return;
	dup = ptr;
	i = 0;
	while (i++ < size)
	{
		*dup = 0;
		dup++;
	}
}
