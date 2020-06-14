#include <stdio.h>

int main(void){
	int anno;
    printf("************************************\n");
    printf("*     Calcolo Anno Bisestile       *\n");
	printf("************************************\n");
    printf("Inserisci l'anno: ");
    scanf("%d", &anno);
    if(anno<=-1){
    	return 0;
	}
	else if (anno % 400 == 0 || (anno % 4 == 0 && anno % 100 != 0)) {
        printf("Anno bisestile");
    }
	else {
		printf("Anno non bisestile");
    }
	return 0;
}
