DZ2B: numerical_operations.o main.o
	g++ numerical_operations.cpp main.cpp -o DZ2B
numerical_operations.o: numerical_operations.cpp
	g++ -c numerical_operations.cpp
main.o: main.cpp numerical_operation.h
	g++ -c main.cpp
clean: 
	rm -rf *.o
cleanall:
	rm -rf *.o DZ2B
