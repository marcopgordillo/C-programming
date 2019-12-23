CC=gcc
CFLAGS=-I.
hellomake: src/hellomake.c src/hellofunc.c
	$(CC) -o build/hellomake src/hellomake.c src/hellofunc.c
