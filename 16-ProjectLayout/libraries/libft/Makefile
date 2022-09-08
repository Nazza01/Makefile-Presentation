# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 20:23:35 by Nathanael         #+#    #+#              #
#    Updated: 2022/08/15 22:36:56 by Nathanael        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#							Edit this section								   #
NAME		=	libft.a
COMPILER	=	gcc
SOURCE_EXT	=	c
COMP_STD	=	-std=c99
COMP_FLAGS	=	-Wall -Wextra -Werror
# 																			   #
################################################################################

################################################################################
#								Directories/Files							   #
################################################################################
SRC_DIR		=	sources
HDR_DIR		=	includes
BUILD_DIR	=	build

SOURCES		=	$(shell find $(SRC_DIR) -name '*.$(SOURCE_EXT)' -not -name '**lst**.$(SOURCE_EXT)')
OBJECTS		=	$(SOURCES:$(SRC_DIR)/%.$(SOURCE_EXT)=$(BUILD_DIR)/%.o)
DEPS		=	$(OBJECTS:.o=.d)

BONUS		=	$(shell find $(SRC_DIR) -name '**lst**_bonus.$(SOURCE_EXT)')
B_OBJ		=	$(BONUS:$(SRC_DIR)/%.$(SOURCE_EXT)=$(BUILD_DIR)/%.o)

LOG			=	$(shell find . -name '*.log')
################################################################################
#								Flags/Utilities								   #
################################################################################
CFLAGS		+=	$(COMP_STD) $(COMP_FLAGS)
LDFLAGS		+=	
INCLUDES	=	-I $(HDR_DIR)

CLEAN_LST	=	$(NAME) $(LOG)
FCLN_LST	=	*.o

RM			=	rm -rf
MKDIR		=	mkdir -p
AR			=	ar -rcs
ECHO		=	echo
RANLIB		=	ranlib

################################################################################
#								Make Rules									   #
################################################################################
.DELETE_ON_ERROR:
.SILENT:

ifeq ($(SILENT_SUBMAKE),0)
all: printout $(NAME)
endif

all: $(NAME)

printout:
	$(info	$(NAME) successfully created)

$(NAME): $(OBJECTS)
	$(MKDIR) $(BUILD_DIR)
	$(AR) $(NAME) $^ $@
	
bonus: $(B_OBJ)
	$(AR) $(NAME) $^

clean:
	$(RM) $(CLEAN_LST) $(FCLN_LST)

fclean:
	clear
	$(MAKE) clean

re: clean all

-include $(DEPS)

$(BUILD_DIR)/%.o : $(SRC_DIR)/%.$(SOURCE_EXT)
	$(MKDIR) $(@D)
	$(COMPILER) $(CFLAGS) $(INCLUDES) -c -o $@ $<