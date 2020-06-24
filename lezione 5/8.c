#include <stdio.h>

int main(void){
	unsigned i;
	unsigned somma=0;
	scanf("%u", &i);
	for(; i>=1; i--){
		somma+=i;
	}
	printf("%u", somma);
	return 0;
}
