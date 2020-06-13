#include <stdio.h>

int main(void){
	int i;
	int somma=0;
	for(i=15; i<=99; i+=5){
		somma+=i;
	}
	printf("%d", somma);
	return 0;
}
