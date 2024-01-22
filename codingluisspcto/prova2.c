#include <stdio.h>

int main()
{
    int n = 9;
    int f = 6;
    int somma = n + f;
    char k = 'y';  /*oppure inserire un codice a partire dalla tabella ascii*/
    int moltiplicazione = n * f;
    int sottrazione = n - f;
    float divisione =((float)n) / f; /*operazione di casting = porto una variabile da intera a decimale tramite ((float)n)*/
    int modulo = n % f;
    printf("%d %d %d %f", somma, moltiplicazione, sottrazione, divisione);
    printf(" %d", modulo);
    return (0);
}