/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:11:47 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:11:47 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;

	if (!src)
		return (NULL);
	dup = ft_strnew(ft_strlen(src));
	dup = ft_strcpy(dup, src);
	return (dup);
}
