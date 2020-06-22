#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
int main(void){
	unsigned N;
	unsigned K=1;
	bool turno=true;
	unsigned input=0;
	int i;
	printf("Gioco dei fiammiferi");
	printf("\n\nQuanti fiammiferi ci sono nel tavolo? ");
	scanf("%u", &N);
	printf("\nQuanti fiammiferi alla volta si possono togliere? ");
	scanf("%u", &K);
	if(K<1){
		K=1;
	}
	printf("\nOk iniziamo!");
	while(N>1){
		Sleep(1000);
		if(turno==true){
			printf("\nE' il turno del giocatore 1");
			turno=false;
		}else{
			printf("\nE' il turno del giocatore 2");
			turno=true;
		}
		printf("\nCi sono %u fiammiferi\n\n", N);
		
		for(i=0; i<=N; i++){
			printf("| ");
		}
		
		printf("\n\nQuanti fiammiferi vengono tolti (max=%u)? ", K);
		scanf("%u", &input);
		if(input<=K){
			N-=input;
		}else{
			while(1){
				printf("input non valido. riprova\n");
				printf("\n\nQuanti fiammiferi vengono tolti (max=%u)? ", K);
				scanf("%u", &input);
				if(input<=K){
						N-=input;
						break;
				}
			}
		}
	}
	printf("\nAbbiamo un vincitore");
	Sleep(1000);
	if(turno==true){
		printf("\nSono lieto di informare il giocatore 1");
		turno=false;
	}else{
		printf("\nSono lieto di informare il giocatore 2");
		turno=true;
	}
	Sleep(500);
	printf("\nche e' rimasto da prendere l'ultimo fiammifero durante il turno dell'avversario", N);
	Sleep(1000);
	printf("\n\nhai vinto!", N);
	return 0;
}
