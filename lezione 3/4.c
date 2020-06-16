#include <stdio.h>

int main(void){
	printf("4_visualizza pari\n");
	int num;
	int i;
	scanf("%d", &num);
	if (num>=0){
		for(i=0; i<=num; i+=2){
			printf("%d ", i);
		}
	}else{
		for(i=0; i>=num; i-=2){
			printf("%d ", i);
		}
	}
	return 0;
}
