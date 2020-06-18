#include <stdio.h>
#include <stdbool.h>

int main(void){
	printf("11_Media voti\n");
	float num;
	float somma=0;
	float media;
	unsigned count=0;
	char continuare;
	bool basta=false;
	while(basta!=true){
		continuare='e';
		count++;
		printf("\nInserire voto numero %u:", count);
		scanf("%f", &num);
		somma+=num;
		media=somma/count;
		printf("   Media attuale:%f, Numero di voti inseriti:%u\n   Continuare? (S/N):", media, count);
		scanf("%c", &continuare);
		while(1){
			scanf("%c", &continuare);
			if(continuare=='S'){
				basta=false;
				break;
			} else if (continuare=='N'){
				basta=true;
				break;
			}else{
				printf("Input non valido. Riprova.\n   ");
			}
		}
	}
	printf("Media finale:%f, Numero di voti inseriti:%u\n", media, count);
	return 0;
}
