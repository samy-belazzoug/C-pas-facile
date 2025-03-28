#include <stdio.h>
//17. Générer la table de multiplication d’un nombre.

int main() 
    {int n;
    printf("Entrez un nombre n : ");scanf("%i",&n);
    int count = 0;
    for (count; count <= 10;count++) 
    {printf("%i",count);printf(" x ");printf("%i",n);printf(" = ",count);printf("%d\n",count*n);}
    return 0;}