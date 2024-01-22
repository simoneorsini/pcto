#include <stdio.h>

int main ()
{
    int a;
    int r;
    int costante = 25;
    printf ("Inserisci due numeri\n");  /*l'ordine dei dati è importante, quindi l'assegnazione dei valori tramite scanf va effettuata prima della moltiplicazione*/
    scanf("%d %d", &a, &r);
    int moltiplicazione = a * r;
    int moltiplicazioneecostante = a * r + costante;
    printf("Moltiplicazione = %d\n Moltiplicazione+costante = %d", moltiplicazione, moltiplicazioneecostante);
    return (0);
}