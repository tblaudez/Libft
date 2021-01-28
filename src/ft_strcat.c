/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:11:36 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:11:36 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int	i;
	int	j;

	if (!src)
		return (dst);
	i = ft_strlen(dst);
	j = -1;
	while (src[++j])
		dst[i + j] = src[j];
	dst[i + j] = '\0';
	return (dst);
}
