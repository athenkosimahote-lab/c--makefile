myapp: main.o utils.o
	gcc main.o utils.o -o myapp -lm
main.o: main.c utils.h
	gcc -c main.c
utils.o: utils.c utils.h
	gcc -c utils.c
clean:
	rm -f *.o myapp