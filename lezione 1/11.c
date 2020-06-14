#include <stdio.h>

int main(void){
	int num;
	int i;
	int somma;
	scanf("%d", &num);
	for(i=1; i<=num; i+=2){
		somma+=i;
	}
	printf("%d", somma);
	return 0;
}
