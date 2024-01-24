#include <stdio.h>

int main ()
{
    float lato1;
    float lato2;
    float lato3;
    printf ("Seleziona la lunghezza del primo lato\n");
    scanf("%f", &lato1);
    printf ("Seleziona la lunghezza del secondo lato\n");
    scanf("%f", &lato2);
    printf ("Seleziona la lunghezza del terzo lato\n");
    scanf("%f", &lato3);
    while (lato1 > 0 && lato2 > 0 && lato3 > 0 && lato1 + lato2 > lato3 && lato2 + lato3 > lato1 && lato3 + lato1 > lato2)
    {
        if (lato1 == lato2 && lato2 == lato3)
        {
            printf("Il triangolo è equilatero\n");
        }
        else if (lato1 == lato2 || lato1 == lato3 || lato2 == lato3)
        {
            printf("Il triangolo è isoscele\n");
        }
        else
        {
            printf("Il triangolo è scaleno\n");
        }
        printf ("Seleziona la lunghezza del primo lato\n");
        scanf("%f", &lato1);
        printf ("Seleziona la lunghezza del secondo lato\n");
        scanf("%f", &lato2);
        printf ("Seleziona la lunghezza del terzo lato\n");
        scanf("%f", &lato3);
    }
    return (0);
}