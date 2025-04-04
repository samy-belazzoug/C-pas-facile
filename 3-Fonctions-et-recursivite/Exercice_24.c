#include <stdio.h>
//24. Vérifier si un nombre est premier.

int premier(int a);

int main() {printf("%d",premier(123));}

int premier(int a)
/*Retourne 1 si premier et 0 sinon
Complexité lente (linéaire...).*/
{int divi = 3;
    if (a % 2 == 0) {return 0;}
    else 
        {while (divi < a) 
        {if (a % divi == 0) {return 0;}
        else {divi += 2;}}}
    return 1;
}
