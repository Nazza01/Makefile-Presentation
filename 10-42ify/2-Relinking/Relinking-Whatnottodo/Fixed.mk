NAME   = projectname

CC       = gcc
CFLAGS   = -std=c99 -Wall -Wextra -Werror -I inc

SOURCES  := test.c main.c
INCLUDES := main.h
OBJECTS  := $(SOURCES:%.c=%.o)
rm       = rm -f

$(NAME): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(NAME)

clean:
	$(rm) $(NAME) $(OBJECTS)