/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strequ.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:11:49 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:11:49 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_strequ(const char *s1, const char *s2)
{
	if (s1 && s2)
		return (!ft_strcmp(s1, s2));
	return (false);
}
