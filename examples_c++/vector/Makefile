CC=g++
CFLAGS=-I.
#DEPS=rngs.h
#OBJ=rngs.o projectile-template.o
OBJ=main.o

#%.o: %.cc #$(DEPS)
%.o: %.cc $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

run: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)

clean: 
	rm -f *.o run
