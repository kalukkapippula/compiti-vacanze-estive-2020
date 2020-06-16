#include <stdio.h>

int main(void){
	printf("1_Contanumeri\n");
	int num=1;
	int conteggio=0;
	while(num!=0){
		conteggio++;
		scanf("%d", &num);
	}
	printf("%d", conteggio);
	return 0;
}
