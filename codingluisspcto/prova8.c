#include <stdio.h>
#include <string.h>

int main ()
{
    char choice [50];
    printf("Inserisci una stringa:\n");
    scanf("%s", choice);
    if (strcmp(choice, "roma") == 0) {printf("Sei stupido"); }
    else {printf("Bravo"); }
    return (0);

}