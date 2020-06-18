#include <stdio.h>

int main(void){
	printf("7_Conto alla rovescia\n");
	int i=19;
	while(i<=19){
		scanf("%d", &i);
	}
	for(; i>=0; i--){
		printf("%d ", i);
	}
	return 0;
}
