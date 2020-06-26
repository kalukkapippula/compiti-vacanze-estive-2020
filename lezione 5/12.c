#include <stdio.h>

int main(void){
	int num1=0;
	int num2=0;
	int prodotto;
	printf("inserisci il primo numero (>=0):");
	while(1){
		scanf("%i", &num1);
		if(num1>=1){
			break;
		}else{
			printf("Input sbagliato. Riprova.\n");
		}
	}
	printf("inserisci il secondo numero (>=0):");
	while(1){
		scanf("%i", &num2);
		if(num2>=1){
			break;
		}else{
			printf("Input sbagliato. Riprova.\n");
		}
	}
	prodotto=num1*num2;
	printf("%ix%i=%i", num1, num2, prodotto);
	return 0;
}
