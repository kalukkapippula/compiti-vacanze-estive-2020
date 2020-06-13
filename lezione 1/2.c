#include <stdio.h>

int main(void){
	int input;
	int max=-2147483647;
	int i;
	for(i=1; i<=10; i++){
		scanf("%d", &input);
		if(input>=max){
			max=input;
		}
	}
	printf("il massimo di questi numeri e': %d", max);
	return 0;
}
