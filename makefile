out: address.o date.o main.o
	g++ -g address.o date.o main.o -o out
address.o: address.h address.cpp
	g++ -g -c address.cpp
date.o: date.h date.cpp
	g++ -g -c date.cpp
main.o: main.cpp address.h date.h
	g++ -g -c main.cpp
run: out
	./out
clean: 
	rm *.o
	rm out
debug: out
	gdb out
