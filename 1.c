#include <stdio.h>

int main(void){
	int i;
	int num;
	int somma=0;
	scanf("%d", &i);
	for(;i>=1;i--){
		scanf("%d", &num);
		somma+=num;
	}
	printf("%d", somma);
	return 0;
}
