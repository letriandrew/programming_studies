CC=g++
FLAGS=-std=c++17 -g

all: hero_test
	
hero_test:
	$(CC) -o bin/hero_test.out -I header/ test/hero_test.cpp src/Hero.cpp

clean:
	rm bin/*.out
