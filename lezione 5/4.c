#include <stdio.h>

int main(void){
	unsigned i;
	unsigned num;
	unsigned min=4294967295;
	scanf("%u", &i);
	for(;i>=1;i--){
		while(1){
			scanf("%u", &num);
			if(num<=0){
				printf("num>0");
			}else{
				break;
			}
		}
		if(min>=num){
			min=num;
		}
	}
	printf("Il minore dei numeri inseriti e' %u", min);
	return 0;
}
