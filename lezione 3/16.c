#include <stdio.h>

int main(void){
	printf("16_divisione sottrazioni successive\n");
	int num1=0;
	int num2=0;
	int max=0;
	unsigned div=0;
	scanf("%d", &num1);
	scanf("%d", &num2);
	if(num2>num1){
		max=num2;
		num2=num1;
		num1=max;
	}else{
		max=num1;
	}
	printf("\n");
	while(1){
		printf("\n%d-%d=", num1, num2);
		num1-=num2;
		printf("%d", num1);
		if(num1<0){
			num1+=num2;
			break;
		}
		div++;
	}
	printf("\n\n%d/%d=%u resto=%d", max, num2, div, num1);
	return 0;
}
