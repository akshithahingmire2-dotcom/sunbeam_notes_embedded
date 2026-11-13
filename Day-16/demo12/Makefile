
# syntax:
# target : list of dependancies
# 	command/rule/recipe

# main.out : main.o mymath.o
# 	gcc -o main.out main.o mymath.o

# Automatic variables (thier values are automatically evaluated)
#	$@	-	target of a rule	(main.out)
#	$^	-	list of dependancies	(main.o mymath.o)
#	$<	-	first/corresponding dependancy	(main.o)

# OBJS = main.o mymath.o

# main.out : $(OBJS)
# 	gcc -o $@ $^

#	% - stem (single or multiple characters)

TARGET=main

CSRCS = $(TARGET).c 
CSRCS += mymath.c fun.c 

COBJS = $(CSRCS:.c=.o) 

CC = gcc
CFLAGS = -m32 -Wall
LDFLAGS = -m32 -Wall -lm

$(TARGET) : $(COBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $<

run:
	./$(TARGET)

debug:
	gdb $(TARGET)

clean:
	rm $(TARGET) *.o


.phony: run debug clean









