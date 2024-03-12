Workshop: main.o
	g++ -o Workshop main.o
 main.o: main.cpp Workshop.h
	g++ -c main.cpp
 run:
    ./Workshop