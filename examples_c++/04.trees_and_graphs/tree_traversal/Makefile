CC=g++
CXXFLAGS=-I.
OBJ=main.o

%.o: %.cc $(DEPS)
		$(CC) -g -c -o $@ $< $(CXXFLAGS)

program: $(OBJ)
		$(CC) -o $@ $^ $(CXXFLAGS)

clean: 
	rm -f *.o program
