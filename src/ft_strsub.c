/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsub.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:12:19 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:12:19 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, int start, size_t len)
{
	char	*str;

	if (!s || !len)
		return (NULL);
	str = ft_strnew(len);
	str = ft_strncpy(str, s + start, len);
	return (str);
}
