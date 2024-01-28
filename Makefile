.PHONY: all clean recursives loops loopd recursived

all: mains maindloop maindrec

main.o: main.c NumClass.h
	gcc -Wall -c main.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -Wall -fPIC -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -Wall -fPIC -c advancedClassificationRecursion.c

basicClassification.o: basicClassification.c NumClass.h
	gcc -Wall -fPIC -c basicClassification.c

libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	gcc -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o

libclassloops.so: advancedClassificationLoop.o basicClassification.o
	gcc -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o

libclassloops.a: advancedClassificationLoop.o basicClassification.o
	ar -rcu libclassloops.a advancedClassificationLoop.o basicClassification.o

libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	ar -rcu libclassrec.a advancedClassificationRecursion.o basicClassification.o

mains: main.o libclassrec.a
	gcc -Wall -o mains main.o libclassrec.a 

maindloop: main.o libclassloops.so
	gcc -Wall -o maindloop main.o -L. -lclassloops -lm

maindrec: main.o libclassrec.so
	gcc -Wall -o maindrec main.o -L. -lclassrec -lm

recursived: libclassrec.so

loopd: libclassloops.so

loops: libclassloops.a

recursives: libclassrec.a

clean: 
	rm -f *.o *.a *.so *.gch *.exe mains maindloop maindrec

