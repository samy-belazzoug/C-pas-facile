#include <stdio.h>
//5. Convertir un entier en flottant et vice versa.
int main() {
    int x = 4.0; //Conversion implicite d'un float en entier
    int y = 2; //Conversion explicite d'un entier en float
    float z = (float) y;
    printf("%i\n",x);
    printf("%f",z);
    return 0;
}