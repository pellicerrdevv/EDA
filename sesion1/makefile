# Proyecto Práctica 1

prueba1: listado1.c ordenacion.o
	gcc -g listado1.c ordenacion.o -o prueba1
prueba2: listado4.c ordenacion.o
	gcc -g listado4.c ordenacion.o -o prueba2
prueba3: listado5.c ordenacion.o
	gcc -g listado5.c ordenacion.o -o prueba3
eje1: medirTiemposV.c ordenacion.o
	gcc -g medirTiemposV.c ordenacion.o -o eje1
ordenacion.o: ordenacion.c ordenacion.h
	gcc -c -g ordenacion.c
clean:
	rm *.o
