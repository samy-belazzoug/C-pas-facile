#include <stdio.h>
//Échanger les valeurs de deux variables.
int main() {
    char x = 'c';
    char y = '+';
    char z = x;
    x = y;y = z;
    printf("x : %c\n",x);printf("y : %c",y);
    return 0;
}