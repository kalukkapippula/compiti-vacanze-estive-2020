#include <stdio.h>
int main() {
    int num, i;
    unsigned long long fatt = 1;
    printf("Scrivi un intero: ");
    scanf("%d", &num);
    if (num < 0)
        printf("Errore! Non esiste il fattoriale di un numero negativo.");
    else {
        for (i = 1; i <= num; ++i) {
            fatt *= i;
        }
        printf("Il fattoriale di %d = %llu", num, fatt);
    }

    return 0;
}
