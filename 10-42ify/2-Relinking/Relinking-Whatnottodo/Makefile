TARGET   = projectname

CC       = gcc
CFLAGS   = -std=c99 -Wall -Wextra -Werror -I. -c

LINKER   = gcc -o
LFLAGS   = -Wall

SOURCES  := $(wildcard *.c)
INCLUDES := $(wildcard *.h)
OBJECTS  := $(SOURCES:*.c=*.o)
rm       = rm -f

$(TARGET): obj
	$(LINKER) $(TARGET) $(LFLAGS) $(OBJECTS)

obj: $(SOURCES) $(INCLUDES)
	$(CC) $(CFLAGS) $(SOURCES)

clean:
	$(rm) $(TARGET) *.o