CC=g++
FLAGS=-std-c++17 -g

all: grade_switch number_switch

grade_switch:
	$(CC) -o bin/grade_switch.out -I header/ src/grade_switch.cpp

number_switch:
	$(CC) -o bin/number_switch.out -I header/ src/number_switch.cpp

clean:
	rm bin/*.out
