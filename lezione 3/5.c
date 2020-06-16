#include <stdio.h>

int main(void){
	int input;
	int mag=0;
	int min=0;
	int zero=0;
	while(1){
		scanf("%d", &input);
		if(input<0){
			min++;
			break;
		}
		if(input>0){
			mag++;
		}
		if(input==0){
			zero++;
		}
	}
	printf("numeri<0 = %d \nzeri     = %d \nnumeri>0 = %d", min, zero, mag);
	return 0;
}
