SRC = main.c
OBJ = libfbl.o dbcon.o
OPT = -I/usr/include/postgresql/ -L/usr/lib/postgresql/9.1/lib/ -Wall
COMP = g++
APP = fblapp

libfbl: main.c $(OBJ)
	$(COMP) $(OPT) $(SRC) -o $(APP) $(OBJ) -lpq

libfbl.o: src/libfbl.c include/libfbl.h
	$(COMP) $(OPT) -c src/libfbl.c
	
dbcon.o: src/dbcon.c include/dbcon.h
	$(COMP) $(OPT) -c src/dbcon.c

cleanup:
	rm $(OBJ) $(APP)
	
memcheck:
	valgrind ./$(APP)

