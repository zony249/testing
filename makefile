exe: main.o
	g++ main.o -o exe

main.o: main.cpp
	g++ -c main.cpp -o main.o

clean:
	rm *.o exe
