C=g++
FLAGS=-std=c++17 -g

all: Cards Deck

Cards:
	$(CC) -o bin/Cards.out -I header/ Cards.cpp

Deck:
	$(CC) -o bin/Deck.out -I header/ Deck.cpp

clean:
	rm bin/*.out
