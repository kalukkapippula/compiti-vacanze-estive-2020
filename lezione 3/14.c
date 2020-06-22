#include <stdio.h>

int main(void){
	int num1;
	int num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	while(1){
		if(num1>num2){
			num1-=num2;
			printf("\nnum1=%d num2=%d", num1, num2);
			if(num1-num2<3){
				break;
			}
		}
		if(num1<num2){
			num2-=num1;
			printf("\nnum1=%d num2=%d", num1, num2);
			if(num2-num1<3){
				break;
			}
		}
	}
	return 0;
}
