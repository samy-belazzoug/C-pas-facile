#include <stdio.h>
//15. Trouver la somme et la moyenne des nombres d’un tableau.
int main() 
    {int array[] = {2,4,5,7,8,9,10}; //tableau de 10 entiers max.
    int length = sizeof(array) / sizeof(array[0]);
    int i; int somme = 0;
    for (i = 0; i < length ;i++) 
    {somme += array[i];}
    printf("%d",somme);
    return 0;}