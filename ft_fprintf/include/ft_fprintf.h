/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fprintf.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 14:55:10 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 14:55:10 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FPRINTF_H
# define FT_FPRINTF_H

# include <stdarg.h>
# include <wchar.h>
# include <unistd.h>
# include "libft.h"

# define FLAGS		"#0- +"
# define LETTERS	"sSdoxcCpub"

# define HASH		16
# define ZERO		8
# define MINUS		4
# define SPACE		2
# define PLUS		1

typedef struct s_printf
{
	char			flags;
	char			modif;
	int				width;
	int				preci;

}					t_printf;

void				ft_fprintf(int fd, char *format, ...);

char				*apply_hash(char *str, char conv);
char				*apply_zero(char *str, char conv);
char				*apply_minus(char *str);
char				*apply_space(char *str, char conv);
char				*apply_plus(char *str, char conv);

char				*calculate_unicode(char *ret, wchar_t value);
char				*get_string(va_list ap);
char				*get_char(va_list ap);
char				*get_pointer(va_list ap);

char				*get_decimal(va_list ap);
char				*get_hexa(va_list ap);
char				*get_octal(va_list ap);
char				*get_unsigned(va_list ap);
char				*get_binary(va_list ap);

t_printf			*get_list_printf(int type);
int					set_modif(const char *format);
char				*check_flags(char *format);
int					check_colors(char *format, int fd, int *i);
char				*apply_width(char *str, char conv);

char				*ft_uitoabase(uintmax_t nbr, int base);
int					ft_unbrdig(uintmax_t nbr, int base);

#endif
