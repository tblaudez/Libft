/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 14:55:23 by tblaudez      #+#    #+#                 */
/*   Updated: 2021/01/22 14:55:23 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>

# include "ft_fprintf.h"

/*
** Memory zone operation
*/
void					*ft_memset(void *s, int c, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);
void					ft_bzero(void *s, size_t n);
/*
** String operation
*/
int						ft_strlen(const char *str);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strncpy(char *dst, const char *src, size_t len);
char					*ft_strcat(char *dst, const char *src);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strchr(char *s, int c);
char					*ft_strdup(const char *src);
char					*ft_strnew(size_t size);
bool					ft_strequ(const char *s1, const char *s2);
char					*ft_strsub(const char *s, int start, size_t len);
char					*ft_strjoinfree(char *s1, char *s2, int free1,\
int free2);
int						ft_charsrc(const char *str, char c);
char					*ft_strreplace(char *str, char c1, char c2);
/*
** Character classification
*/
int						ft_isprint(int c);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isupper(int c);
int						ft_islower(int c);
int						ft_isdigit(int c);
int						ft_isspace(int c);
int						ft_isascii(int c);
int						ft_str_is_something(const char *str, int (*f)(int));
/*
** Output operation
*/
void					ft_putchar(char c);
void					ft_putstr(const char *s);
void					ft_putendl(const char *s);
void					ft_putnbr(intmax_t n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(const char *s, int fd);
void					ft_putendl_fd(const char *s, int fd);
void					ft_putnbr_fd(intmax_t n, int fd);
/*
** Utility
*/
int						ft_atoi(const char *str);
char					*ft_itoa(intmax_t n);
char					*ft_itoabase(intmax_t n, int base);
int						ft_atoibase(const char *str, int base);
int						ft_nbrdig(intmax_t n, int base);
intmax_t				ft_power(intmax_t nbr, int pow);

#endif
