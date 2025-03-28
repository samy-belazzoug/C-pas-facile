#include <stdio.h>
//13. Calculer la somme des nombres de 1 à N.

int main() 
    {int n;
    printf("Entrez un entier n : ");scanf("%i",&n);
    //Varaiables par défault.
    int iteration = 1;int copy = iteration;int iteplus = iteration + 1;
    while (iteration,iteration<n) 
        {int calcul = copy + iteplus;
        copy = calcul;
        iteration ++; iteplus ++;}
        printf("%i",copy);
        return 0;}