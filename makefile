all: 
	gcc -o construction.pickle main.c struct.c

run:
	./construction.pickle