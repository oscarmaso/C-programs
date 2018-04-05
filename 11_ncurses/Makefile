EXE = jumping

CFLAGS = -g -Wall
LDFLAGS = -lncurses

SRC = $(wildcard *.cpp)
OBJ = $(SRC:%.cpp=%.o)

CC = g++

all: $(EXE)


.PHONY: clean

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) *.o $(EXE)
