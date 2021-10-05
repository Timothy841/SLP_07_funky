add: funky.o
	gcc -o funky funky.o

funky.o: funky.c
	gcc -c funky.c

run:
	./funky

clean:
	rm *.o
