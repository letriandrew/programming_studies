GCC=g++
FLAGS=-std=c++17 -Wall -g
HEADER=header/

all: BST

BST: BST.o
	$(GCC) $(FLAGS) -I $(HEADER) -o bin/BST.out src/main.cpp obj/BST.o

BST.o:
	$(GCC) $(FLAGS) -I $(HEADER) -o obj/BST.o -c src/BST.cpp

