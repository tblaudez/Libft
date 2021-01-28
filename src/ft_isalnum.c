/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 15:10:22 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 15:10:22 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
