#include <stdio.h>

int main(void){
	printf("2_Trova minore");
	unsigned num;
	unsigned min= 4294967295;
	while(1){
		scanf("%u", &num);
		if(num<=0) {
			break;
		}
		if(num<=min){
			min=num;
		}
	}
	printf("Il numero inserito dal valore minore e' '%u", min);
	return 0;
}
