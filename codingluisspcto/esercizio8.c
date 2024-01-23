#include <stdio.h>

int main()
{
    int etagiacomo;
    int etasimone;
    int etafrancesco;
    int etaflavio;
    int etaandrea;
    int somma;
    printf("Ciao Giacomo, quanti anni hai?\n");
    scanf("%d", &etagiacomo);
    printf("Giacomo ha %d anni\n", etagiacomo);
    printf("Ciao Simone, quanti anni hai?\n");
    scanf("%d", &etasimone);
    printf("Simone ha %d anni\n", etasimone);
    printf("Ciao Francesco, quanti anni hai?\n");
    scanf("%d", &etafrancesco);
    printf("Francesco ha %d anni\n", etafrancesco);
    printf("Ciao Flavio, quanti anni hai?\n");
    scanf("%d", &etaflavio);
    printf("Flavio ha %d anni\n", etaflavio);
    printf("Ciao Andrea, quanti anni hai?\n");
    scanf("%d", &etaandrea);
    printf("Andrea ha %d anni\n", etaandrea);
    somma = etagiacomo + etasimone + etafrancesco + etaflavio + etaandrea;
    printf ("La somma di tutte le età è: %d anni", somma);
    return (0);
}