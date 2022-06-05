all: cyfighter

main.o: main.c head.h
	gcc -c main.c -o main.o

functions.o: functions.c head.h
	gcc -c functions.c -o functions.o

display.o: display.c head.h 
	gcc -c display.c -o display.o

cyfighter: main.o functions.o display.o
	gcc main.o functions.o display.o -o cyfighter

#supprime tous les fichiers objets
clean :	
	rm -f *.o
	rm cyfighter