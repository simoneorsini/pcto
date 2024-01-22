#include <stdio.h>

int main ()
{
    float a;
    float b;
    float c;  /* nota che else si usa solo quando c'è una condizione oltre a if, mentre else if si usa con più condizioni*/
    a = 2.5;
    b = 6;
    c = 1.78;
    if (a>b && b<c)     {printf("a è maghggiore di b e b è minore di c"); }
    else if (a<b && b<c)   {printf("c è maggiore di a e di b"); }
    else if (a<b && b>c)     {printf("b è maggiore di a e di c"); }
    return (0);
}