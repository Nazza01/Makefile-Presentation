# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 15:10:15 by Nathanael         #+#    #+#              #
#    Updated: 2022/09/08 12:28:51 by Nathanael        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include config/settings.mk

IMPORTED_INC	=	$(INC_DIR)/imported
CFLAGS			+=	-I $(INC_DIR) -I $(IMPORTED_INC)

SRCS			=	$(SRC_DIR)/main.c
OBJS			=	$(SRCS:$(SRC_DIR)/%.c=$(BLD_DIR)/%.o)

# Automatically finds libraries in the given libraries directory
FIND_SUBDIR		:=	$(shell find $(LIB_DIR) -type d -depth 1)
FIND_LIBS		:=	$(shell find $(LIB_DIR) -type d -depth 2 -name 'lib*.a')
LIB_INCS		:=	$(shell find $(LIB_DIR) -name '*.$(HDR_EXT)')

# Converts the library name with only the directory
LIBS_NAME		:=	$(basename $(notdir $(FIND_LIBS)))

# substitute the lib part of the lib.a file with nothing
LIBS_BASE		:=	$(subst lib,,$(LIBS_NAME))

# Add -L to the directory found above
LDFLAGS			=	$(addprefix -L,$ $(FIND_SUBDIR))
# Add -l to the library found above
LLFLAGS			=	$(addprefix -l,$(LIBS_BASE))

# Utilities to use further on
MKDIR			=	mkdir -p
CP				=	cp

# If we want the libraries to display progress we can set VERBOSE in the settings.mk
# This allows for each step to show the progress of the build
ifeq ($(VERBOSE),0)
.SILENT:
endif

all: makelibs $(NAME)

# Define the rule to make the libraries as they are needed by the program
# 	Make the imported directory inside $(INC_DIR)
# 	Copy over any found .h files from the libraries
# 	Use recursive $(MAKE) pointing to libft's directory so the lib.a file is made
makelibs:
	$(MKDIR) $(IMPORTED_INC)
	$(CP) $(LIB_INCS) $(IMPORTED_INC)
	$(MAKE) -C $(LIBFT_DIR) SILENT_SUBMAKE=$(VERBOSE)

# Define the compilation step for each source
# 	Makes the objects directory using special syntax @D - The directory part of 
#		the file name of the target, with the trailing slash removed. If the 
# 		value of $@ is dir/foo.o then $(@D) is  dir. This value is . if $@ 
# 		does not contain a slash.
# 	Uses default compiler to compile each .c file into the relevant object file.
$(OBJS): $(BLD_DIR)/%.o : $(SRC_DIR)/%.c
	$(MKDIR) $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

# Define the NAME rule which depends on the objects being made/defined first
# 	Use the compiler gcc (defined in CC)
# 	Link the directory - LDFLAGS = -L libs/libft
# 	Link the library - LLFLAGS = -l ft
# 	Link using the objects (defined in OBJS)
# 	Link into a final executable (name of the rule is subsituted for $@ - which is NAME)
$(NAME): $(OBJS)
	$(CC) $(LDFLAGS) $(LLFLAGS) $(OBJS) -o $@

# Define the clean rule - removing NAME
clean:
	$(RM) $(NAME)

# Define the fclean rule - removing object directory and imported headers
fclean:
	$(RM) -r $(BLD_DIR) $(IMPORTED_INC)

# Define the re which calls fclean, clean then all
re: fclean clean all

