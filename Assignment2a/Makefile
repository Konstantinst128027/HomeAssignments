DZ2A: stek1.o stek2.o
	g++ stek1.cpp stek2.cpp -o DZ2A
stek2.o: stek2.cpp
	g++ -c stek2.cpp
stek1.o: stek1.cpp stek2.h
	g++ -c stek1.cpp
clean: 
	rm -rf *.o
cleanall:
	rm -rf *.o DZ2A
