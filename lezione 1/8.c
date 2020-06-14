#include <stdio.h>

int main(void){
	int input=0;
	int stop=0;
	int count=0;
	while(stop!=1){
		scanf("%d", &input);
		if(input%2==0){
			count+=1;
		}
		else{
			stop=1;
		}
	}
	printf("%d", count);
	return 0;
}
