# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tblaudez <tblaudez@student.oodam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/22 16:24:47 by tblaudez      #+#    #+#                  #
#    Updated: 2021/01/22 16:24:47 by tblaudez      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME:= libft.a
OBJ:= src/ft_atoi.o src/ft_bzero.o src/ft_charsrc.o src/ft_isalnum.o src/ft_isalpha.o src/ft_isascii.o \
	src/ft_isdigit.o src/ft_islower.o src/ft_isprint.o src/ft_str_is_something.o src/ft_isspace.o src/ft_isupper.o \
	src/ft_itoa.o src/ft_itoabase.o src/ft_memalloc.o src/ft_memcmp.o src/ft_memcpy.o src/ft_memdel.o src/ft_memset.o \
	src/ft_nbrdig.o src/ft_power.o src/ft_putchar.o src/ft_putchar_fd.o src/ft_putendl.o src/ft_putendl_fd.o \
	src/ft_putnbr.o src/ft_putnbr_fd.o src/ft_putstr.o src/ft_putstr_fd.o src/ft_strcat.o src/ft_strchr.o \
	src/ft_strcmp.o src/ft_strcpy.o src/ft_strdup.o src/ft_strequ.o src/ft_strjoinfree.o src/ft_strlen.o \
	src/ft_strncpy.o src/ft_strnew.o src/ft_strreplace.o src/ft_strsub.o
INCLUDE:= include/libft.h
CFLAGS:= -Wall -Wextra -Werror -std=c99 -pedantic -I include/ -I ft_fprintf/include
LIBFPRINTF:= ft_fprintf/libfprintf.a

all: $(NAME)
	@printf "\e[35mDone\e[0m\n"

$(NAME): $(LIBFPRINTF) $(OBJ) $(INCLUDE)
	@printf "\n\e[32mCreating archive \e[4m%s\e[0m\n" $(NAME)
	@ar rs $(NAME) $(OBJ) $(LIBFPRINTF) &>/dev/null

$(LIBFPRINTF):
	@make -C ft_fprintf/

%.o: %.c
	@printf "\e[33mCompiling %-50s\e[0m\r" $<
	@$(CC) $(CFLAGS) -c $< -o $@

%.c:

clean:
	@rm -f $(OBJ)
	@$(MAKE) -C ft_fprintf/ clean

fclean: clean
	@printf "\e[31mDeleting \e[4m%s\e[0m\n" "$(NAME)"
	@rm -f $(NAME)
	@$(MAKE) -C ft_fprintf/ fclean

re: fclean all

.PHONY: all clean fclean re