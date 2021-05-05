CC=g++

all: animal_struct shapes_struct shapes person

animal_struct:
	$(CC) -o Bin/animal_struct.out Structs/animal_struct.cpp

shapes_struct:
	$(CC) -o Bin/shapes_struct.out Structs/shapes_struct.cpp

shapes:
	$(CC) -o Shapes/bin/shapes.out -I Shapes/header Shapes/src/main.cpp Shapes/src/shapes.cpp

person:
	$(CC) -o Person/bin/Person.out -I Person/header Person/src/main.cpp Person/src/Hair.cpp Person/src/Person.cpp

clean:
	rm Bin/*.out
