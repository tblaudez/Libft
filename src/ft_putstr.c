/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:11:28 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:11:28 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline void	ft_putstr(const char *s)
{
	size_t	length;

	length = ft_strlen(s);
	write(1, s, length);
}
