#include <stdio.h>

int main()
{

    int anno;
    int i;
    printf("Inserisci un anno:\n");
    scanf("%d", &anno);
    if (anno%4 == 0 && anno%100 != 0 || anno%400 == 0)
    {
        printf("L'anno è bisestile");
    }
    else
    {   
        printf("L'anno non è bisestile");
    }
    return (2);
    

}