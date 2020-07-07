#include <stdio.h>

int main(void){
	int i, count=0;
	printf("");
	for(i=1; count<=99; i+=2){
		printf("%3d ", i);
		if(count%5==4){
			printf("\n"); 
		}
		count++;
	}
	return 0;
}
