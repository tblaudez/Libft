# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tblaudez <tblaudez@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/03/31 15:28:54 by tblaudez      #+#    #+#                  #
#    Updated: 2021/08/05 15:13:53 by tblaudez      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

TARGET := libft.a

CC ?= gcc
CFLAGS ?= -I include/ -Wall -Wextra -Werror -Wno-implicit-fallthrough

HEADERS := $(shell find include/ -name "*.h")
SOURCES := $(shell find src/ -name "*.c")
OBJECTS := $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS) $(HEADERS)
	ar rcs $@ $(OBJECTS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -vf $(OBJECTS)

fclean: clean
	@rm -vf $(TARGET)

re: fclean all

.PHONY: all clean fclean re