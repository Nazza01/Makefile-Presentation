# Define the name of the executable
NAME = outputStrLen

# List directory structure
SRC_DIR = sources
HDR_DIR = headers
OBJ_DIR = objects

# Use the current shell implementation of find to find all sources
SRC := $(shell find $(SRC_DIR) -name '*.c')

# Define a new list of object files from the source files
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Define all the flags to be used with each compile step
CFLAGS += -Wall -Wextra -Werror -std=c99 -I $(HDR_DIR)

# Define each external utility that we will use
MKDIR = mkdir -p
RMDIR = rmdir

# Define the phony rule
.PHONY: all clean fclean re

# Default rule step calls name
all: $(NAME)

# Define a pattern for each object file to create from each source file
# We use mkdir to create each subdirectory for each object file corresponding to the source file
# @D is a special type of syntax which refers to the directory part of a target (sources/funct for a file in sources/funct/ft_strlen.c)
# 	e.g A source file: sources/func/ft_strlen.c the rule would be
# 	objects/funct/ft_strlen.o : sources/funct/ft_strlen
$(OBJ): $(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(MKDIR) $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

# Define the rule for the program which looks at the objects first
#	link each object file to the final exectutable
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

# Define the clean rule
clean:
	$(RM) -r $(OBJ_DIR)

# Define the fclean rule
fclean: clean
	$(RM) $(NAME)

# Define the re rule
re: fclean all
