#include <stdio.h>

int main(void){
	unsigned n;
	unsigned quad;
	unsigned i=1;
	unsigned count;
	unsigned somma=0;
	scanf("%d", &n);
	quad= n*n;
	printf("pow(%u)=%u, ", n, quad);
	for(count=1; count<=n; count++){
		printf("%u+", i);
		somma+=i;
		i+=2;
	}
	printf("0=%u", somma);
	if(somma==quad){
		printf("\n\n%u=%u", somma, quad);
	}else{
		printf("\n\n%u!=%u", quad, somma);
	}
	return 0;
}
