#include <stdio.h>

int main ()
{
    float a;
    float b;
    float c;
    printf("Inserisci tre numeri:\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("Primo numero: %f\nSecondo numero: %f\nTerzo numero: %f\n", a, b, c);
    if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && c + a > b)
    {
        printf("Il triangolo esiste!");
    }
    else
    {
        printf("Il triangolo non esiste");
    }
    return (0);
}