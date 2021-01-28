# ************************************************************************** #
#                                                                            #
#                                                        ::::::::            #
#   CMakeLists.txt                                     :+:    :+:            #
#                                                     +:+                    #
#   By: tblaudez <tblaudez@student.codam.nl>         +#+                     #
#                                                   +#+                      #
#   Created: 2021/01/25 12:41:21 by tblaudez      #+#    #+#                 #
#   Updated: 2021/01/25 12:41:21 by tblaudez      ########   odam.nl         #
#                                                                            #
# ************************************************************************** #

# Project name
PROJECT(fprintf)
# Cmake minimum version
CMAKE_MINIMUM_REQUIRED(VERSION 3.17)
# C standard to use
SET(CMAKE_C_STANDARD 99)
# Compiler flags on 'Default' build
if (CMAKE_BUILD_TYPE STREQUAL "")
    ADD_COMPILE_OPTIONS(-Wall -Wextra -Werror -std=c99 -pedantic-errors)
endif ()

###

ADD_LIBRARY(fprintf STATIC src/apply_flags.c src/custom_func.c src/ft_fprintf.c src/get_alpha.c src/get_numeric.c
        src/utils.c)
TARGET_INCLUDE_DIRECTORIES(fprintf PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/../include)