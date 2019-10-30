CC=g++
INCDIR = -I./inc
LIB=mylib.a

myapp: main.o mylib.a
	${CC} -o myapp main.o ${LIB}

main.o:
	${CC} -c main.cpp ${INCDIR}

mylib.a:
	${CC} -c util.cpp ${INCDIR}
	ar cr ${LIB} util.o

install: myapp mylib.a
	mv myapp ./bin
	mv mylib.a ./lib

clean:
	-rm *.o
	-rm myapp

