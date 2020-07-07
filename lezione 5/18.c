#include <stdio.h>

int main(void){
	int i, ecc, dif, num;
	printf("Inserire numero: ");
	scanf("%d", &num);
	printf("Inserire numero iterazioni: ");
	scanf("%d", &i);
	ecc=num;
	for( ; i>=1; i--){
		dif=2/ecc;
		ecc=dif+ecc/2;
		printf("ecc=%d, dif=%d\n", ecc, dif);
	}
	return 0;
}
