#include <stdio.h>

int main ()
{
    char a;
    char b;
    char c;
    char d;
   printf("Inserisci quattro caratteri\n");
   scanf("%c %c %c %c", &a, &b, &c, &d);
   printf("%c%c%c%c ", a, b, c, d);
    return (0);
}