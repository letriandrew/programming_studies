CC=g++
FLAGS=-std=c++17 -Wall -g
OBJS=Person.o Hair.o
INCLUDE=-I headers/

all: personTest

personTest: Person.o Hair.o
   $(CC) $(INCLUDE) $(FLAGS) -o bin/personTest.out tests/personTest.cpp objs/Person.o objs/Hair.o

Person.o:
    $(CC) $(INCLUDE) $(FLAGS) -o objs/Person.o -c src/Person.cpp

Hair.o:
    $(CC) $(INCLUDE) $(FLAGS) -o objs/Hair.o -c src/Hair.cpp
