#include <stdio.h>
//16. Vérifier si un nombre est un multiple de 3 ou 5.

int main() 
    {int number = 10;
    if (number % 3 == 0) {printf("Multiple de 3");}
    else if (number % 5 == 0) {printf("Multiple de 5");}
    else {printf("Pas un multiple de 3 ou 5");}
    return 0;}