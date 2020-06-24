#include <stdio.h>

int main(void){
	int i;
	printf("inserisci numero tale che 10<x<20\n");
	while(1){
		scanf("%d", &i);
		if(i>10 && i<20){
			break;
		}else{
			printf("    input errato. riprova\n");
		}
	}
	printf("\n");
	for(; i>=0; i--){
		printf("%d ", i);
	}
	return 0;
}
