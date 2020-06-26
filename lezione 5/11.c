#include <stdio.h>

int main(void){
	int i;
	int conteggio=0;
	for(i=7; i<=100; i+=10){
		conteggio++;
	}
	for(i=70; i<=79; i++){
		conteggio++;
	}
	printf("%d", conteggio);
	return 0;
}
