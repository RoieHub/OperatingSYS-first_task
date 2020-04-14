
all: firstask secondtask thirdtask firstTaskB secondTaskB

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

main2_1.o: process1.cpp
	gcc -Wall -g -c process1.cpp

secondTaskB:process2.o
	gcc -Wall -g process2.o -o secondTaskB

main2_2.o: process2.cpp
	gcc -Wall -g -c process2.cpp

lib: hello_Ariel.o
	gcc -Wall -g -shared hello_Ariel.o -o libHelloAriel.so

.PHONY: clean all

clean:
	rm -f firstask secondtask thirdtask firstTaskB secondTaskB *.o *.so
