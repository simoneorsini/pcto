#include <stdio.h>

int main ()
{
    int ordine = 5;
    int pezziordinati;
    int totordine;
    float sconto;
    float sconto2;
    printf("Quanti pezzi vuoi ordinare?\n");
    scanf("%d", &pezziordinati);
    while(pezziordinati>0)
    {
    totordine = pezziordinati * ordine;
    sconto = totordine - (totordine * 10 / 100);
    sconto2 = totordine - (totordine * 15 / 100);
        if (pezziordinati<30) 
        {
            printf("Il prezzo totale è: %d", totordine); 
        }
        else if (pezziordinati>30 && pezziordinati<50)
        {
            printf("Il prezzo totale è: %f", sconto); 
        }
        else if (pezziordinati>50) 
        {
            printf("Il prezzo totale è: %f\n", sconto2); 
        }
        printf("Quanti pezzi vuoi acquistare?\n");
        scanf("%d", &pezziordinati);
    }
    
    
    return (0);
}