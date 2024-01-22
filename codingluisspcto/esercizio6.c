/*Un programma stampa a schermo il numero 1234 solo se viene inserito un numero compreso tra 5 e 10 (il 5 non è compreso) altrimenti se è compreso tra 3 e 5 stamperà 4321.*/
#include <stdio.h>

int main ()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int k = 10;
    int j = 0;
    float f;
    int i;
    printf("Inserisci un numero casuale compreso tra 1 e 10: \n");
    scanf ("%f", &f);
    if (f>k && f == j) {printf("Errore"); }
    else if (f > 5 && f <=10) {printf("%d%d%d%d", a, b, c, d); }
    else if (f>=3 && f<=5) {printf("%d%d%d%d", d, c, b, a); }
    i=i+1;
    return (0);


}