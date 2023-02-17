COMPILER=g++
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)

%.o: %.cpp Makefile
	$(COMPILER) $(CFLAGS) -c $< -o $@

EXEC=main
CFLAGS=-Wall -Wextra -g

.PHONY: all clean run

all: $(EXEC)

$(EXEC): $(OBJ)
	$(COMPILER) -o $@ $^

run: $(EXEC)
	./$(EXEC)

clean:
	rm -f $(EXEC) $(OBJ) $(DEPENDS)
