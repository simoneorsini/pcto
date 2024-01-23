#include <stdio.h>

int main ()

{
    int a;
    int b;
    int c = a / b;
    printf("Inserisci un numero: \n");
    scanf("%d", &a);
    printf("Inserisci un secondo numero: \n");
    scanf("%d", &b);
    if (c * b == a) {printf("Sono multipli"); }
    else {printf("Non sono multipli"); }
    return (0);
}