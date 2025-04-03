#include <stdio.h>
//20. Calculer la factorielle d’un nombre.

int main() {
    int n = 3;
    int iteration = 1;
    int iteplus = iteration + 1;

    int r = iteration;
    
    while (iteration < n) 
    {int result = r * iteplus;
    r = result;
    printf("%d\n",r);
    iteration ++;
    iteplus ++;}

}