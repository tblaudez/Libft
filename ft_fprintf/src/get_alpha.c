/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_alpha.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 14:54:26 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 14:54:26 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

char	*calculate_unicode(char *ret, wchar_t value)
{
	int	i;

	i = ft_strlen(ret);
	if (value < 128)
		ret[i] = value;
	else if (value < 2048)
	{
		ret[i] = 0xC0 | ((value >> 6) & 0x1F);
		ret[++i] = 0x80 | (value & 0x3F);
	}
	else if (value < 65536)
	{
		ret[i] = 0xE0 | ((value >> 12) & 0xF);
		ret[++i] = 0x80 | ((value >> 6) & 0x3F);
		ret[++i] = 0x80 | (value & 0x3F);
	}
	else
	{
		ret[i] = 0xF0 | ((value >> 18) & 0x7);
		ret[++i] = 0x80 | ((value >> 12) & 0x3F);
		ret[++i] = 0x80 | ((value >> 6) & 0x3F);
		ret[++i] = 0x80 | (value & 0x3F);
	}
	return (ret);
}

char	*get_string(va_list ap)
{
	t_printf	*list;
	char		*ret;
	wchar_t		*arg;

	list = get_list_printf(0);
	if (!list->modif)
	{
		ret = va_arg(ap, char*);
		if (!ret)
			return (ft_strdup("(null)"));
		return (ft_strdup(ret));
	}
	arg = va_arg(ap, wchar_t*);
	if (!arg)
		return (ft_strdup("(null)"));
	ret = ft_strnew(sizeof(wchar_t) * 0xFFF);
	while (*arg)
	{
		calculate_unicode(ret, *arg);
		arg++;
	}
	return (ret);
}

char	*get_char(va_list ap)
{
	char	*ret;

	ret = ft_strnew(sizeof(wchar_t) + 1);
	return (calculate_unicode(ret, va_arg(ap, wchar_t)));
}

char	*get_pointer(va_list ap)
{
	char	*ret;

	ret = ft_itoabase(va_arg(ap, size_t), 16);
	return (ft_strjoinfree("0x", ret, 0, 1));
}
