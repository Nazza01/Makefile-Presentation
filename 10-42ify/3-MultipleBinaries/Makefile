
# Name the two executables that will use their respective .c files
# Note that you need to name them what the .c file is called otherwise make
#	doesn't have a rule for them
NAME = first second

# Compiler and flags to use
CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -Werror

# Calls the executable, make automatically knows how to compile .c to .o
# For Example
# 	calling NAME will specify first and second to be compiled
# 	first will be compiled and linked like so:
# 		$(CC) $(CFLAGS) first.c -o first
# 	second will be compiled and linked like so:
# 		$(CC) $(CFLAGS) second.c -o second
# As we are only using one single file to write a main executable, we can skip
# linking a source file to an object file.
all: $(NAME)

# Cleaning and remake rules like usual
clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

