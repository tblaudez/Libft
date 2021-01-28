# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tblaudez <tblaudez@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/25 13:07:55 by tblaudez      #+#    #+#                  #
#    Updated: 2021/01/25 13:07:55 by tblaudez      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME:= libfprintf.a
OBJ:= src/apply_flags.o src/custom_func.o src/ft_fprintf.o src/get_alpha.o src/get_numeric.o src/utils.o
INCLUDE:= include/ft_fprintf.h ../include/libft.h
CFLAGS:= -Wall -Wextra -Werror -std=c99 -pedantic -I include/ -I ../include/

all: $(NAME)
	@printf "\e[35mDone\e[0m\n"

$(NAME): $(OBJ) $(INCLUDE)
	@printf "\n\e[32mCreating archive \e[4m%s\e[0m\n" $(NAME)
	@ar rs $(NAME) $(OBJ) &>/dev/null

%.o: %.c
	@printf "\e[33mCompiling %-50s\e[0m\r" $<
	@$(CC) $(CFLAGS) -c $< -o $@

%.c:

clean:
	@rm -f $(OBJ)

fclean: clean
	@printf "\e[31mDeleting \e[4m%s\e[0m\n" "$(NAME)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re