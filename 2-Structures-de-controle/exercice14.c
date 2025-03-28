#include <stdio.h>
//14. Afficher les nombres pairs de 1 à 100.

int main()
    {int i;
    for (i = 1; i <= 100 ;i++) 
    {if (i % 2 == 0) {printf("%i\n",i);}}
    return 0;}