#include <stdio.h>

int main(void){
	unsigned num;
	int input;
	int somma;
	printf("Quanti numeri vuoi sommare? ");
	scanf("%u", &num);
	for(; num>=1; num--){
		scanf("%d", &input);
		somma+=input;
	}
	printf("\nLa somma di questi numeri e': %d", somma);
	return 0;
}
