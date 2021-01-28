/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:11:38 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:11:38 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	if (!c)
		return (s + ft_strlen(s));
	while (s && *s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
