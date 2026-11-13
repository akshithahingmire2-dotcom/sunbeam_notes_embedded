
# make variables
# variable name = variable value
# to use variable --> $(variable name)

CC = gcc

main.out :	main.o mymath.o
	$(CC) -o main.out main.o mymath.o

main.o : main.c
	$(CC) -c main.c

mymath.o : mymath.c
	$(CC) -c mymath.c

run :
	./main.out

.phony : run







