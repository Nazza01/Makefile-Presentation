# Define the name of the executable
NAME = outputStrLen

# List directory structure
SRC_DIR = sources
HDR_DIR = includes
OBJ_DIR = objects

# List the sources
FILES :=	ft_strlen \
			main

# ft_strlen becomes sources/ft_strlen
FILES_APPEND := $(addprefix $(SRC_DIR)/,$(FILES))

# sources/ft_strlen becomes sources/ft_strlen.c
SRC := $(addsuffix .c,$(FILES_APPEND))

# Define a new list of object files from the source files
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Define all the flags to be used with each compile and link step
CFLAGS += -Wall -Wextra -Werror -std=c99 -I $(HDR_DIR)

# Define each external utility that we will use
MKDIR = mkdir -p
RMDIR = rmdir

# Default rule step calls name
all: $(NAME)

# This rule will automatically be called if the object folder isn't present
# $@ refers to the $(OBJ_DIR) folder
$(OBJ_DIR):
	$(MKDIR) $@

# Define the objects rule (we need to put this rule in now as we are using 
# 	nested folders for objects and sources)
# The '|' character specifies, this is a dependancy, if it isn't there, call the rule
$(OBJ): $(OBJ_DIR)/%.o : $(SRC_DIR)/%.c | $(OBJ_DIR)
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
