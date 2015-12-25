CC=g++
CXXFLAGS=-I.
OBJ=main.o

%.o: %.cc $(DEPS)
		$(CC) -g -c -o $@ $< $(CXXFLAGS)

run: $(OBJ)
		$(CC) -o $@ $^ $(CXXFLAGS)

clean: 
	rm -f *.o run
