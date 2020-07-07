#include <stdio.h>

int main(void){
	int num, i, prod;
	scanf("%d", &num);
	for(i=0; i<=12; i++){
		prod=num*i;
		printf("%d ", prod);
	}
	return 0;
}
