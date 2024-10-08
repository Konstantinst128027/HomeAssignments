proga1: hello_world.o main.o
	g++ hello_world.c main.c -o proga1
hello_world.o: hello_world.c
	g++ -c hello_world.c 
main.o: main.c hello_world.h
	g++ -c main.c
clean:
	rm -f *.o proga1 
