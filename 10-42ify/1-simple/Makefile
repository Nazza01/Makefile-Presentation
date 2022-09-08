# Name is defined - yes
NAME	=	exampleProgram

# Define the compiler to use - gcc is required for c files for 42 projects
CC		=	gcc

# Define the flags to compile with, the below is a large portion of all 42 projects
CFLAGS	+=	-Wall -Wextra -Werror -std=c99 

# sources are explicity named - yes
SRC		=	example.c

# objects refer to the sources and refer to an object file
OBJ		=	$(SRC:%.c=%.o)

# all rule satisfied
all: $(NAME)

# This rule says, to build the sources' relevent .o file, we want to use:
# 	Variable type		Symbol	Substitute with		Pattern
# 	Automatic variable	$<		the source file		Any pattern matching %.c
# 	Automatic variable	$@ 		the object file		Any pattern matching %.o
$(OBJ): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

# NAME rule statisfied - yes
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

# clean rule statisfied - yes
clean:
	$(RM) *.o

# fclean rule satisfied - yes, also cleans all object files too - not needed but useful
fclean: clean
	$(RM) $(NAME)

# re rule satisfied - yes, also does fclean (calls clean anyway) and then calls all
re: fclean all
