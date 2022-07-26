OBJS = main.o funcion1.o funcion2.o
BINARY = Ejecutable
CFLAGS = -g -Wall
LDFLAGS = -lm

Ejecutable: $(OBJS)
	gcc -o $(BINARY) $(OBJS) $(CFLAGS) $(LDFLAGS)

main.o: main.c funcion1.h funcion2.h

funcion1.o: funcion1.c funcion1.h

funcion2.o: funcion2.c funcion2.h

clean:
	rm -f $(BINARY) $(OBJS)
