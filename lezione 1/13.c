#include <stdio.h>

int main(void){
	int num1;
	int input;
	int somma;
	scanf("%d", &num1);
	while(somma<=num1){
		scanf("%d", &input);
		somma+=input;
	}
	return 0;
}
