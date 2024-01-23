#include <stdio.h>

int main ()
{
    int a;
    int b;
    printf("Inserisci il primo numero: \n");
    scanf("%d", &a);
    printf("Inserisci il secondo numero");
    scanf("%d", &b);
    if (a>b) {printf("%d", a); }
    else if (a<b) {printf("%d", b); }
    else if (a == b) {printf("Numeri uguali!"); }
    return (0);

}