#include <stdio.h>

int main(void){
	int input=0;
	int stop=0;
	int min=2147483647;
	while(1){
		scanf("%d", &input);
		if(input==0){
			break;
		}
		if(min>=input){
			min=input;
		}
	}
	printf("%d", min);
	return 0;
}
