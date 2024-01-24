/*Scrivere un programma che dato in input il raggio di un cerchio ne stampi l'area utilizzando una funzione che riceve il raggio dal programma principale attraverso un passaggio per valore.*/
#include <stdio.h>

float acerchio(float a)
{
    float area;
    area = a * 3.14;
    printf("L'area del cerchio è : %f\n", area);
    return (area);
}

int main ()
{
    float raggio;
    printf("Seleziona la lunghezza del raggio\n");
    scanf("%f", &raggio);
    while (raggio > 0)
    {
        acerchio(raggio);
        printf("Seleziona la lunghezza del raggio\n");
        scanf("%f", &raggio);
    }
    return (0);
}