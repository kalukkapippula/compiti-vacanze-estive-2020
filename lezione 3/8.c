#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
	printf("8_lancio due dadi\n\n");
	srand(time(NULL));
	int num1 = rand()%6;
	int num2 = rand()%6;
	printf("%d %d", num1, num2);
}
