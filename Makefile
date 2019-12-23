CC=gcc
CFLAGS=-I.
DEPS=hellomake.h
OBJ=src/hellomake.o src/hellofunc.o

%.o: %.c ${DEPS}
	${CC} -c -o $@ $< ${CFLAGS}

hellomake: ${OBJ}
	$(CC) -o build/$@ $^ ${CFLAGS}
