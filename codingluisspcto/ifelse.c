#include <stdio.h>

int main ()
{
    int a;
    int b;
    printf("Inserisci il primo numero: \n");
    scanf("%d", &a);
    printf("Inserisci il secondo numero\n");
    scanf("%d", &b);
    if (a>b) {printf("%d", a); }
    else if (a<b) {printf("%d", b); }
    else if (a == b) {printf("Numeri uguali!"); } /* si può anche mettere else senza condizione*/
    return (0);

}