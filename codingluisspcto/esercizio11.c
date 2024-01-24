#include <stdio.h>
#include <string.h>

int main ()
{
    char c;
    printf("Inserisci una lettera: \n");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c =='o' || c == 'u')
    {
        printf("La lettera è una vocale!");
    }
    else
    {
        printf("La lettera è una consonante!");
    }
}
