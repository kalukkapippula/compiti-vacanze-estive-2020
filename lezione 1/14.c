#include <stdio.h>

int main(void){
	float input;
	float somma=0;
	int count=0;
	while(1){
		scanf("%f", &input);
		count++;
		if(input<=-1){
			break;
		}
		somma+=input;
		printf("%f\n", somma/count);
	}
	return 0;
}
