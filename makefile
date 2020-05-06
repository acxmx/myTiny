main: main.o httpd.o
	gcc -o main main.o httpd.o
main.o: main.c httpd.h
	gcc -g -o main.o -c main.c
httpd.o: httpd.c httpd.h
	gcc -g -o httpd.o -c httpd.c

clean:
	rm *.o
