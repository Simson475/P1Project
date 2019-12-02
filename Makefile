study.exe: Naturvidenskab.o Humaniora.o Teknisk.o Samfund.o utility.o Sundhed.o main.c
	gcc -o study -ansi -Wall -pedantic Naturvidenskab.o Humaniora.o Teknisk.o Samfund.o utility.o Sundhed.o main.c

Naturvidenskab.o: Naturvidenskab.c Naturvidenskab.h
	gcc -c -ansi -Wall -pedantic Naturvidenskab.c 

Humaniora.o: Humaniora.c Humaniora.h
	gcc -c -ansi -Wall -pedantic Humaniora.c 

Samfund.o: Samfund.c Samfund.h
	gcc -c -ansi -Wall -pedantic Samfund.c 

Sundhed.o: Sundhed.c Sundhed.h
	gcc -c -ansi -Wall -pedantic Sundhed.c 

Teknisk.o: Teknisk.c Teknisk.h
	gcc -c -ansi -Wall -pedantic Teknisk.c 

utility.o: utility.c utility.h
	gcc -c -ansi -Wall -pedantic utility.c 
	
clean:
	rm *.o study.exe
	
