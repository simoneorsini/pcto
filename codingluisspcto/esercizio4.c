/*Una autovettura può impostare una velocità a cui viaggiare in modo costante ( il max è 100 km/h e può raggiungere al max 99 km/h). inserire da tastiera la velocità di crociera desiderata e stampare a schermo il valore. Inserire un controllo  che non permetta il superamento della velocità max e un controllo per determinare quando l’auto è ferma (velocità = 0)*/
#include <stdio.h>

int main ()
{
    int vmax = 100;
    int vnulla = 0;
    float a;
    printf("Inserire la velocità desiderata\n");
    scanf("%f", &a);
    if (a>vmax) {printf("La velocità impostata non è consentita"); }
    else if (a<vmax && a != vnulla) {printf("La velocità è pari a %f", a); }
    else if (a = vnulla) {printf("La velocità è nulla"); }
    return (0);
}