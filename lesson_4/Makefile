CC=g++

all: animal_struct shapes_struct shapes

animal_struct:
	$(CC) -o Bin/animal_struct.out Structs/animal_struct.cpp

shapes_struct:
	$(CC) -o Bin/shapes_struct.out Structs/shapes_struct.cpp

shapes:
	$(CC) -o Shapes/bin/shapes.out Shapes/src/main.cpp Shapes/src/shapes.cpp

clean:
	rm Bin/*.out
