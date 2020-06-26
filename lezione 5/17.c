#include <stdio.h>

int sommadiv(int);
int contadiv(int);

int main(void){
	int num1;
	int media;
	scanf("%d", &num1);
	media=sommadiv(num1)/contadiv(num1);
	printf("%d", media);
	return 0;
}

int sommadiv(int num){
	int somma=1;
	int i;
	for(i=2; i<=num-1; i++){
		if(num%i==0){
			somma+=i;
		}
	}
	return somma;
}

int contadiv(int num){
	int conteggio=1;
	int i;
	for(i=2; i<=num-1; i++){
		if(num%i==0){
			conteggio++;
		}
	}
	return conteggio;
}
