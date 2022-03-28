#include <stdio.h>
#include "myheader.h"

int main (void){
	char name[17] = {0,};

	printf("Name: ");
	scanf("%s", name);

	printf("test");

	printHello();
	printBye();

	return 0;


}
