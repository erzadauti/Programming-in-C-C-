/*CH-230-A
A7p3.c
Erza Dauti
edauti@constructor.university
*/


# Makefile for A7p1.c

# Compiler and flags
CC = gcc
CFLAGS = -Wall

# Source files and object files
SOURCES = A7p1.c linked_list.c
OBJECTS = $(SOURCES:.c=.o)

# Executable
EXECUTABLE = linked_list

# Targets
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)
