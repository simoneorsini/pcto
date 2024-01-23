#include <stdio.h>

int main ()

{
    float a;
    float b;
    float c;
    printf("Inserisci tre numeri casuali:\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("Primo numero: %f\n Secondo numero: %f\n Terzo numero: %f\n", a, b, c);
    if (a - b == b - c) 
    {   
        printf("I tre numeri sono in progressione aritmetica");
    }
    else 
    {
        printf ("I tre numeri non sono in progressione aritmetica");
    }
    return (0);
}