main.exe: main.o
	g++ -o main.exe main.o point.h

main.o : main.cpp point.h
	g++ -c main.cpp 