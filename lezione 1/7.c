#include <stdio.h>

int main(void){
	int num;
	int i;
	int somma=0;
	scanf("%d", &num);
	for(i=0; i<=num; i++){
		somma+=i;
	}
	printf("%d", somma*2);
	return 0;
}
