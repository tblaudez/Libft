/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:10:57 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:10:57 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void		*tmp;
	char		*dst_dup;
	const char	*src_dup;
	size_t		i;

	i = 0;
	dst_dup = dst;
	src_dup = src;
	tmp = dst;
	while (i < n)
	{
		dst_dup[i] = src_dup[i];
		i++;
	}
	return (tmp);
}
