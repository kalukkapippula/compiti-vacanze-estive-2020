#include <stdio.h>

int main(void){
	float input;
	float somma;
	while(1){
		scanf("%f", &input);
		if(input<=0){
			break;
		}
		somma+=input;
		printf("%f\n", somma);
	}
	return 0;
}
