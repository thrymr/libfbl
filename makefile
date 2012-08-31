SRC = main.c
OBJ = libfbl.o
OPT = -Wall -std=c99
COMP = gcc

libfbl: main.c $(OBJ)
	$(COMP) $(OPT) $(SRC) -o libfbl $(OBJ)

libfbl.o: src/libfbl.c include/libfbl.h
	$(COMP) $(OPT) -c src/libfbl.c
	
cleanup:
	rm $(OBJ)
