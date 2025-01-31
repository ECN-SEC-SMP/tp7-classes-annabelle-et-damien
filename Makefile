main.exe: main.o point.o
	g++ -o main.exe *.o

main.o : main.cpp
	g++ -c main.cpp 

point.o : point.cpp
	g++ -c point.cpp 

clean:
	rm -f main.exe *.o