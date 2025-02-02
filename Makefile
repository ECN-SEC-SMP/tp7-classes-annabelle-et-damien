main.exe: main.o point.o forme.o cercle.o
	g++ -o main.exe *.o

main.o : main.cpp
	g++ -c main.cpp

point.o : point.cpp
	g++ -c point.cpp

forme.o : forme.cpp
	g++ -c forme.cpp

cercle.o : cercle.cpp
	g++ -c cercle.cpp

clean:
	rm -f main.exe *.o