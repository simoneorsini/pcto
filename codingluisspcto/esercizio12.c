#include <stdio.h>
double radiceQuadrata(double numero) {
  double approssimazione = numero / 2.0;
  double differenza = numero - approssimazione * approssimazione;
  while (differenza > 0.00001) {
    approssimazione = (approssimazione + numero / approssimazione) / 2.0;
    differenza = numero - approssimazione * approssimazione;
  }
  return approssimazione;
}

int main ()
{
    float lato1;
    float lato2;
    float lato3;
    float p;
    float pp;
    float a;
    printf("Inserisci la misura del primo lato:\n");
    scanf("%f", &lato1);
    printf("Inserisci la misura del secondo lato:\n");
    scanf("%f", &lato2);
    printf("Inserisci la misura del terzo lato:\n");
    scanf("%f", &lato3);
    p = (lato1 + lato2 + lato3) / 2 ;
    pp = p * 2;
    a = radiceQuadrata(p * (p - lato1) * (p - lato2) * (p - lato3));
    if (lato1 > 0 && lato2 > 0 && lato3 > 0 && lato1 + lato2 > lato3 && lato2 + lato3 > lato1 && lato3 + lato1 > lato2)
    {
        printf("Il perimetro è: %f\n", pp);
        printf("L'area è: %f", a);
    }
    else
    {
        printf("Il triangolo non esiste");
    }

    return (0);
    }