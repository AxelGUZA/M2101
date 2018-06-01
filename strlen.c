#include <stdio.h>

int my_strlen(const char *str)
{
    int i =0;
	while (*str != '\0'){
	str++;
	i++;
	}
    return i;
}

int main(void){
	int p=0;
   p = my_strlen("Bonjour");
   printf("%d\n",p);
}

