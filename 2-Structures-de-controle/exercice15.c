#include <stdio.h>
//15. Trouver la somme et la moyenne des nombres d’un tableau.
int main() 
    {int array[] = {2,4,5,7,8,9,9}; //tableau de 10 entiers max.
    int length = sizeof(array) / sizeof(array[0]); //longueur du tableau
    
    int i; int somme = 0;
    for (i = 0; i < length ;i++) 
    {somme += array[i];}
    float moyenne = (float) somme / length;
    printf("Somme : ");printf("%d\n",somme);
    printf("Moyenne (arrondie): ");printf("%f",moyenne);
    return 0;}