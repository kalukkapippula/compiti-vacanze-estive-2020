#include <stdio.h>

int main(void){
	int num;
	int somma=0;
	unsigned count=0;
	while(somma<1000){
		count++;
		scanf("%d", &num);
		somma+=num;
	}
	printf("%u", count);
	return 0;
}
