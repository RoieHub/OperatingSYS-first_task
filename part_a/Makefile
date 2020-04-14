all: exe lib

hello_Ariel.o: hello_Ariel.c hello_Ariel.h
	gcc -c -fPIC hello_Ariel.c 

task1: hello_Ariel.c hello_Ariel.h main1_1.c
	gcc -o hello1 hello_Ariel.c main1_1.c


task2: main1_2.h main1_2.c lib
	gcc main1_2.c -L. -l Hello -o hello2
	export LD_LIBRARY_PATH=.


task3: hello_Ariel.h main1_3.c lib
	gcc main1_3.c -fPIC -ldl -o hello3


lib: hello_Ariel.h hello_Ariel.c
	gcc -o libHello.so -shared -fPIC hello_Ariel.c

clean: 
	-rm hello1 hello2 hello3 libHello.so 
