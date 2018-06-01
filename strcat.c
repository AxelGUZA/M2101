#include <stdio.h>

char *my_strcat(char *dest,const char *src){
	char *p= dest;
	

	while( *dest != '\0'){

	
		dest++;
	} 

	while( *src != '\0'){
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return p;

}


int main(void){
	char src[] = "jour";
	char dest[50] = "Bon";

	printf("%s \n",my_strcat(dest,src));
} 
