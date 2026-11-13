
# syntax to write rules
#	every rule contains two line
#		line 1 - dependancy/preriquites line
#		line 2 - rule/recipe line

#	target : List of dependancies
#		command

main.out :	main.o mymath.o
	gcc -o main.out main.o mymath.o

main.o : main.c
	gcc -c main.c

mymath.o : mymath.c
	gcc -c mymath.c



