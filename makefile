out: address.o main.o
	g++ -g address.o main.o
address.o: address.h address.cpp
	g++ -g -c address.cpp
main.o: main.cpp address.h
	g++ -g -c main.cpp
run: out
	./out
clean: 
	rm * .o
	rm out
debug: out
	gdb out
