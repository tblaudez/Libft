/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:10:08 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:10:08 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t size)
{
	char	*dup;
	size_t	i;

	if (size <= 0 || ptr == NULL)
		return ;
	dup = ptr;
	i = 0;
	while (i++ < size)
	{
		*dup = 0;
		dup++;
	}
}
