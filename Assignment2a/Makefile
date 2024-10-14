DZ2A: main.o reverse.o
	g++ main.cpp reverse.cpp -o DZ2A
reverse.o: reverse.cpp
	g++ -c reverse.cpp
main.o: main.cpp reverse.h
	g++ -c main.cpp
clean: 
	rm -rf *.o
cleanall:
	rm -rf *.o DZ2A
