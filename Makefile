all: exe lib

task1: hello_Ariel.c hello_Ariel.h main1_1.c
	gcc -o hello1 hello_Ariel.c main1_1.c


task2: hello_Ariel.h main1_1.c lib
	gcc main1_1.c -L. -l Hello -o hello2


task3: hello_Ariel.h main1_3.c lib
	gcc main1_3 -fPIC -ldl -o hello3


lib: hello_Ariel.h hello_Ariel.c
	gcc -o libHello.so -shared -fPIC hello_ariel.c

clean: 
	-rm hello1 hello2 hello3 libHello.so 
