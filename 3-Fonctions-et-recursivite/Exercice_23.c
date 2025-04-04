#include <stdio.h>
//ALGORITHME D'EUCLIDE
//23. Trouver le PGCD et le PPCM de deux nombres.

int PPCM(int a, int b);
int PGCD(int a, int b);

int main() 
    {printf("%d\n",PGCD(357,561));
    printf("%d",PPCM(18,24));
    return 0;}

    int PGCD(int a, int b)
    /* Calcule récursivement le PGCD de deux entiers 
    avec l'algorithme d'Euclide*/
    {if (b == 0) {return a;}
    else {return PGCD(b,a%b);}}

    
    int PPCM(int a, int b) 
    // Retourne le PPCM de deux entiers avec 
    {return ( (a*b) / PGCD (a,b) );}

