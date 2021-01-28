/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoinfree.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:11:51 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:11:51 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char *s1, char *s2, \
					 int free1, int free2)
{
	char	*str;

	if (!s2)
		return (s1);
	if (!s1)
		return (s2);
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	if (s1 == s2 && (free1 == 1 || free2 == 1))
	{
		free(s1);
		return (str);
	}
	if (free1 == 1)
		free(s1);
	if (free2 == 1)
		free(s2);
	return (str);
}
