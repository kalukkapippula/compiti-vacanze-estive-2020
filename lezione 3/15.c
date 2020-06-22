#include <stdio.h>

int main(void){
	printf("15_Prodotto somme successive\n");
	unsigned num1=0;
	unsigned num2=0;
	unsigned prodotto=0;
	scanf("%u", &num1);
	scanf("%u", &num2);
	for(;num2>=1;num2--){
		prodotto+=num1;
		printf("\n%u", prodotto);
	}
	return 0;
}
