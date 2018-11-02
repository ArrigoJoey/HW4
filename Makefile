myprog1: myprog1.o
	gcc -o myprog1 myprog1.o
myprog1.o: myprog1.cpp
	gcc -c myprog1.cpp
