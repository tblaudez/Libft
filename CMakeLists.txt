# ************************************************************************** #
#                                                                            #
#                                                        ::::::::            #
#   CMakeLists.txt                                     :+:    :+:            #
#                                                     +:+                    #
#   By: tblaudez <tblaudez@student.codam.nl>         +#+                     #
#                                                   +#+                      #
#   Created: 2021/01/25 12:22:14 by tblaudez      #+#    #+#                 #
#   Updated: 2021/01/25 12:22:14 by tblaudez      ########   odam.nl         #
#                                                                            #
# ************************************************************************** #

# Project name
PROJECT(libft)
# Cmake minimum version
CMAKE_MINIMUM_REQUIRED(VERSION 3.17)
# C standard to use
SET(CMAKE_C_STANDARD 99)
# Compiler flags on 'Default' build
if (CMAKE_BUILD_TYPE STREQUAL "")
    ADD_COMPILE_OPTIONS(-Wall -Wextra -Werror -std=c99 -pedantic-errors)
endif ()

###

ADD_SUBDIRECTORY(ft_fprintf)

ADD_LIBRARY(libft STATIC src/ft_atoi.c src/ft_bzero.c src/ft_charsrc.c src/ft_isalnum.c src/ft_isalpha.c src/ft_isascii.c src/ft_isdigit.c
        src/ft_islower.c src/ft_isprint.c src/ft_str_is_something.c src/ft_isspace.c src/ft_isupper.c src/ft_itoa.c src/ft_itoabase.c src/ft_memalloc.c
        src/ft_memcmp.c src/ft_memcpy.c src/ft_memdel.c src/ft_memset.c src/ft_nbrdig.c src/ft_power.c src/ft_putchar.c src/ft_putchar_fd.c src/ft_putendl.c
        src/ft_putendl_fd.c src/ft_putnbr.c src/ft_putnbr_fd.c src/ft_putstr.c src/ft_putstr_fd.c src/ft_strcat.c src/ft_strchr.c src/ft_strcmp.c
        src/ft_strcpy.c src/ft_strdup.c src/ft_strequ.c src/ft_strjoinfree.c src/ft_strlen.c src/ft_strncpy.c src/ft_strnew.c src/ft_strreplace.c
        src/ft_strsub.c)

TARGET_INCLUDE_DIRECTORIES(libft PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
TARGET_LINK_LIBRARIES(libft LINK_PUBLIC fprintf)