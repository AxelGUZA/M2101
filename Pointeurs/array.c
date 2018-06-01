#include <stdio.h>
#include <stdlib.h>

int *create_array(int size){

	int *array;
	array = malloc(size * sizeof(int));
	
	
	
	for(int i=size; i>-1 ;i--){
		array[i] = size-i;
	}

	return array; 
}

void display_array(int *array,int size){

	for(int i = 0;i < size; i++){
		printf("| %d ",array[i]);

	}

	printf("|\n");


}	

int main(void){
display_array(create_array(2),2);
}

