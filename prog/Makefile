__start__: program
	./program

program: tablica.o elementy.o main.o
	c++ main.o tablica.o elementy.o -o program

tablica.o: tablica.cpp
	c++ -c tablica.cpp -o tablica.o

elementy.o: elementy.cpp
	c++ -c elementy.cpp -o elementy.o

main.o: main.cpp
	c++ -c main.cpp -o main.o
