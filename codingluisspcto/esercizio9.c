#include <stdio.h>

int main ()
{
    float celsius;
    float farenheit;
    float kelvin;
    printf("Inserisci una temperatura in Celsius:\n");
    scanf("%f", &celsius);
    farenheit = celsius * 9/5 + 32;
    kelvin = celsius + 237.15;
    if (celsius>=-237.15) {printf("Temperatura in Farenheit: %f\nTemperatura in kelvin: %f\n", farenheit, kelvin); }
    else {printf("Errore"); }
    return (0);
}