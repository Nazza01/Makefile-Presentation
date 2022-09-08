# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    settings.mk                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/10 16:57:59 by Nathanael         #+#    #+#              #
#    Updated: 2022/09/08 11:54:30 by Nathanael        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 				=	testingLibrary

VERBOSE				=	0	# Set to 1 to output the progress of the build
SRC_EXT				=	c
HDR_EXT				=	h

SRC_DIR				=	sources
INC_DIR				=	includes
LIB_DIR				=	libraries
OBJ_DIR				=	objects

CC					=	gcc
CFLAGS				=	-Wall -Wextra -Werror -std=c99
