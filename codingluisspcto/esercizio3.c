/*fai scrivere all'utente due numeri e posizionali in ordine di grandezza*/
#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Inserisci due numeri\n");
    scanf("%d\n %d", &a, &b);
    if (a>b) {printf("%d %d", a, b); }
    else {printf("%d %d", b, a); }
    return (0);
}