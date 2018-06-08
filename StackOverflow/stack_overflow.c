#include <stdio.h>

int fonction(int n){
 int somme = 0;

	if( n <= 0){
		somme = 0;
	}
	
	if( n >= 1){
		somme = (1 + fonction( n -1)); 
	}

	return somme;
}


int main(void){

printf("%d\n",fonction(1000000));

}
