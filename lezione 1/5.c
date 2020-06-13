#include<stdio.h>
#include<math.h>
int main(void){
    int n, i, num;
    printf("Inserisci un numero maggiore di 2: ");
    scanf("%d", &num);
    printf("\nI numeri primi fino a %d sono : ", num);
/*stampa i primi tre numeri primi*/
    printf("\n1\n2\n3\n");
/*controllo se i numeri fino alla variabile numero...*/
    for (n=3; n<=num; n=n+2){
/*...sono divisibili solo per 1 e loro stessi dunque se
non hanno altri divisori fino alla radice del numero*/
        for (i=3; i<=sqrt(n); i=i+2){
            if (n%i == 0){
                break;
            }
        }
/*stampo il numero se primo*/
        if(n%i!=0)
        {
            printf("%d\n", n);
        }
    }
}

