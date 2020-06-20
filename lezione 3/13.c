#include <stdio.h>

int main(void){
	printf("13_Prodotto somme successive\n");
	unsigned num1=0;
	unsigned num2=0;
	unsigned prodotto=0;
	while(1){
		scanf("%u", &num1);
		if(num1!=0){
			break;
		}
	}
	while(1){
		scanf("%u", &num2);
		if(num2!=0){
			break;
		}
	}
	for(;num2>=1;num2--){
		prodotto+=num1;
	}
	printf("%u", prodotto);
	return 0;
}
