# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/08 09:39:11 by nervin            #+#    #+#              #
#    Updated: 2022/09/05 14:57:17 by Nathanael        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#							FILES TO SEARCH									   #
SRC 	= 	ft_strdup.c \
			ft_calloc.c \
			ft_strchr.c \
			ft_bzero.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strlcat.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memset.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_split.c \
			ft_strtrim.c \
			ft_strmapi.c \
			ft_substr.c \
			ft_striteri.c \
			ft_putnbr_fd.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putstr_fd.c \
			ft_strjoin.c \
			ft_isprint.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isalpha.c \
			ft_isalnum.c

SRC_BON =	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

#						COMPILE, OBJECTS & DIRECTORIES						   #
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -std=c99
NAME	= libft.a
NAME_BON= libft_bonus.a
OBJ		= $(SRC:%.c=%.o)
OBJ_BON	= $(SRC_BON:%.c=%.o)

# 									RULES									   #
all: $(NAME)

# depending on what rule is run, compile each source to its relevent object file
# 	For bonus files we use the same rule, so we can list it here as well as the
# 	compilation stage is the same, as long as we list the correct files above,
# 	it works exactly the same.
# When NAME is called, it compiles each source listed in the SRC variable
# When bonus is called, it compiles each source listed in the SRC_BON variable
$(OBJ_BON) $(OBJ): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Use all objects to create the libft.a library
#	$(AR) refers to the archive utility (ar -rcs)
# 	$@ refers to the name of the rule (in this case libft.a)
# 	$^ refers to all of the files listed to the right of the rule (all objects)
# 	ranlib is the utility to index all functions in the library for faster access
$(NAME): $(OBJ)
	$(AR) -rcs $@ $^
	ranlib $@

# Use all bonus objects to create the libft.a bonus library
# All functions are the same as above except since the rule is called bonus,
#	we cannot use $@ to refer to the $(NAME) variable as we wont be able to use
# 	the library named 'bonus'
# Note the NAME_BON is not required for libft as we need the same name (libft.a)
# even though the contents of the library is different, this is simply for
# demonstration purposes
bonus: $(OBJ_BON)
	$(AR) -rcs $(NAME_BON) $^
	ranlib $(NAME_BON)

# Clean all object files in the current working directory
clean:
	$(RM) *.o

# Calls the clean rule first, then removes any existing libraries
fclean: clean
	$(RM) $(NAME) $(NAME_BON)

# Calls fclean (calling clean) then calls all
re: fclean all

.PHONY: bonus all clean fclean re