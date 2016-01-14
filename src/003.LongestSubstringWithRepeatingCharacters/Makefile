CC=g++
CXXFLAGS=-I ../../include/
OBJ=main.o

%.o: %.cc $(DEPS)
		$(CC) -std=c++11 -g -c -o $@ $< $(CXXFLAGS)

run: $(OBJ)
		$(CC) -o $@ $^ $(CXXFLAGS)

clean: 
	rm -f *.o run
