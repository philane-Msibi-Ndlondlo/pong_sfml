Compiler = gcc
include = ./include/*.hpp
sources = *.cpp
libs = -lstdc++ -lsfml-graphics -lsfml-window -lsfml-system
flags = -Wall -ggdb3 -o
output = a.out

all:
	$(Compiler) $(sources) $(flags) $(output) $(libs)

valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./$(output)

clean:
	rm -rf *.o
	rm -rf a.out
