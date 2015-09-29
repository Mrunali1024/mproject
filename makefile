project: main.o p1.o
	cc main.o p1.o -o project
main.o: main.c p.h
	cc -Wall -c main.c
p1.o: p1.c p.h
	cc -Wall -c p1.c

