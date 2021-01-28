/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:10:59 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:10:59 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_dup;
	const unsigned char	*s2_dup;

	if (s1 == s2 || !n)
		return (0);
	s1_dup = (const unsigned char *)s1;
	s2_dup = (const unsigned char *)s2;
	while (n--)
	{
		if (*s1_dup != *s2_dup)
			return (*s1_dup - *s2_dup);
		if (n)
		{
			s1_dup++;
			s2_dup++;
		}
	}
	return (0);
}
