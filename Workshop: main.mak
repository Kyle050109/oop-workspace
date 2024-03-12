Workshop: workshop.o
	g++ -o Workshop workshop.o
 workshop.o: workshop.cpp workshop.h
	g++ -c workshop.cpp
 run:
    ./Workshop