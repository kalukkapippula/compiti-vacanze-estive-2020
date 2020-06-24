#include <stdio.h>

int main(void){
	int num;
	scanf("%d", &num);
	if(num%2==0){
		num-=2;
	}
	else{
		num-=1;
	}
	printf("%d", num);
	return 0;
}
