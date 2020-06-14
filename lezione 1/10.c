#include <stdio.h>

int main(void){
	int fattore1;
	int fattore2;
	int prodotto;
	scanf("%d", &fattore1);
	scanf("%d", &fattore2);
	for(;fattore2>=1; fattore2--){
		prodotto+=fattore1;
	}
	printf("%d", prodotto);
	return 0;
}
