CC = g++
EXEC = main
SRCS = $(wildcard *.cc)
OBJS = $(SRCS:.cc=.o)
CFLAGS = -g -Wall
INCS = -I../../include/ #-I/usr/local/Cellar/boost/1.59.0/include
LFLAGS = #-L/usr/local/Cellar/boost/1.59.0/lib
LIBS = #-lboost_program_options

all:	$(EXEC)
		@echo The program has been compiled

$(EXEC):$(OBJS)
		$(CC) $(CFLAGS) $(INCS) -o $@ $(OBJS) $(LFLAGS) $(LIBS)

.cc.o:
		$(CC) $(CFLAGS) $(INCS) -c $< -o $@

clean: 
		rm -f $(EXEC) $(OBJS)
