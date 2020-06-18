#include <stdio.h>

int main(void){
	printf("12_media voti 2\n");
	int num;
	int somma=0;
	float media;
	unsigned count=0;
	do{
		count++;
		scanf("%d", &num);
		somma+=num;		
	}while(num!=0);
	count--;
	media=somma/count;
	printf("\n\nMedia=%f", media);
	return 0;
}
