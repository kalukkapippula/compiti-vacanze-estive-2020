#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
	srand(time(NULL));
	unsigned num;
	int random;
	int pari=0;
	int dispari=0;
	printf("9_conta pari/dispari RANDOM\n");
	scanf("%u", &num);
	if(num!=0){
		for(; num>=1; num--){
			random=rand();
			if(random%2==0){
				pari++;
			}else{
				dispari++;
			}
		}
	}
	printf("pari=%d dispari=%d", pari, dispari);
}

