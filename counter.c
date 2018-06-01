#include <stdio.h>

void print_hello()
{
	static int i =1;

	printf("Bonjour numéro %d!\n",i);

	i++;
}

char main(void){
	for (int i=0; i<10; i++){
		print_hello();
	}
}
