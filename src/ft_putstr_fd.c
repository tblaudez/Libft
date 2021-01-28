/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:11:30 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:11:30 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline void	ft_putstr_fd(const char *s, int fd)
{
	size_t	length;

	length = ft_strlen(s);
	write(fd, s, length);
}
