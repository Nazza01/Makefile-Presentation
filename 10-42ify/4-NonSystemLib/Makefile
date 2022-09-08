# Define project name, extensions, directories and compiler type
NAME 				=	testingLibrary

INC_DIR				=	includes
BLD_DIR				=	objects
LIB_DIR				=	libs

LIBFT_DIR			=	$(LIB_DIR)/libft
LIBFT_LIB			=	ft

CC					=	gcc
CFLAGS				=	-Wall -Wextra -Werror -std=c99 -I $(INC_DIR) -I $(INC_DIR)/imported

# Find sources, objects and dependancies
SRCS		=	main.c
OBJS		=	$(SRCS:%.c=$(BLD_DIR)/%.o)

# Directory to place library headers
IMPORTED_INC=	$(INC_DIR)/imported

# Detect and convert the following for use in linking step 
# -L libs/dir	Look for the folder inside of the library - libs/dir
# -l abc		Look for the library called abc inside the above library

# NOTE, for the -l library step, please make sure the library is specified without 'lib' and the '.a'
# 	Here are some examples:
# 	Full archive name	LDFLAGS =				LLFLAGS =
# 	libft.a				-L libs/libft			-l ft
# 	libftprintf.a		-L libs/ft_printf		-l ftprintf
# 	libgnl.a			-L libs/get_next_line	-l gnl
# 	libmlx.a			-L libs/mlx				-l mlx		#dont forget additional flags: -lm -framework OpenGL -framework AppKit
LDFLAGS		=	-L $(LIBFT_DIR)
LLFLAGS		=	-l $(LIBFT_LIB)

# Utilities to use further on
MKDIR		=	mkdir -p
CP			=	cp

# Define the default rule which calls makelibs then $(NAME)
all: makelibs $(NAME)

# Define the rule to make the libraries as they are needed by the program
# 	Make the imported directory inside $(INC_DIR)
# 	Copy over any found .h files from the libraries
# 	Use recursive $(MAKE) pointing to libft's directory so the lib.a file is made
makelibs:
	$(MKDIR) $(IMPORTED_INC)
	$(CP) libs/libft/includes/*.h $(IMPORTED_INC)
	$(MAKE) -C $(LIBFT_DIR)

# Define the compilation step for each source
# 	Makes the objects directory using special syntax @D - The directory part of 
#		the file name of the target, with the trailing slash removed. If the 
# 		value of $@ is dir/foo.o then $(@D) is  dir. This value is . if $@ 
# 		does not contain a slash.
# 	Uses default compiler to compile each .c file into the relevant object file.
$(OBJS): $(BLD_DIR)/%.o : %.c
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

