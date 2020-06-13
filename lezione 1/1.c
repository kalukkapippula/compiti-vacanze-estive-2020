#include <stdio.h>

int main()
{
    int num=0;
    int i;
    int somma=0;
    int input=0;
    scanf ("%d", &num);
    for(i=1 ; i<=num; i++){
        scanf ("%d", &input);
        somma = somma+input;
    }
    printf("La somma è: %d", somma);
    return 0;
}
