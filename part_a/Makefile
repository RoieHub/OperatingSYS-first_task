
all: firstask secondtask thirdtask firstTaskB secondTaskB thirdTaskB forthTaskB

firstask: main1_1.o hello_Ariel.o
	gcc -Wall -g main1_1.o hello_Ariel.o -o firstask
 
main1_1.o: main1_1.c hello_Ariel.h
	   gcc -Wall -g -c main1_1.c

hello_Ariel.o: hello_Ariel.c hello_Ariel.h
	       gcc -Wall -g -c -fPIC hello_Ariel.c



secondtask: main1_2.o lib
	gcc -Wall -g main1_2.o -L. -l HelloAriel -o secondtask

main1_2.o: main1_2.c hello_Ariel.h
	   gcc -Wall -g -c main1_2.c

thirdtask: main1_3.o lib
	gcc -Wall -g main1_3.o -fPIC -ldl -o thirdtask

main1_3.o: main1_3.c hello_Ariel.h
	   gcc -Wall -g -c main1_3.c

firstTaskB:process1.o
	gcc -Wall -g process1.o -o firstTaskB

process1.o: process1.c
	gcc -Wall -g -c process1.c

secondTaskB:process2.o
	gcc -Wall -g process2.o -o secondTaskB

process2.o: process2.c
	gcc -Wall -g -c process2.c

thirdTaskB:process3.o
	gcc -Wall -g process3.o -o thirdTaskB

process3.o: process3.c
	gcc -Wall -g -c process3.c

forthTaskB:process4.o
	gcc -Wall -g process4.o -o forthTaskB

process4.o: process4.c
	gcc -Wall -g -c process4.c

lib: hello_Ariel.o
	gcc -Wall -g -shared hello_Ariel.o -o libHelloAriel.so

.PHONY: clean all

clean:
	rm -f firstask secondtask thirdtask firstTaskB secondTaskB thirdTaskB forthTaskB *.o *.so
