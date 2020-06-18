#include <stdio.h>

int main(void){
	printf("6_Somma multipli 5\n");
	int i;
	int somma=0;
	for(i=15; i<=100; i+=5){
		somma+=i;
	}
	somma-=i;
	printf("%d", somma);
	return 0;
}
