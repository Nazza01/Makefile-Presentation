# The executable/program name (./sayhello)
NAME = sayhello

# The compiler to use (default is cc)
CC = gcc

# Flags that are passed to the C compiler
CFLAGS = -Wall -Wextra -Werror -std=c99

# Define the rule all
all: $(NAME)

# 	Compile the source file helloworld.c to the object file helloworld.o
# 	Link the helloworld.o file to the final executable name (sayhello)
$(NAME):
	$(CC) $(CFLAGS) -c helloworld.c -o helloworld.o
	$(CC) helloworld.o -o $(NAME)

# Define the clean rule
# $(RM) is a default variable containing rm -f
# 	Uses rm -f to remove all .o files and the NAME program
clean:
	$(RM) *.o $(NAME)
