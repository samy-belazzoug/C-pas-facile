#include <stdio.h>
//12. Lire un âge et afficher une catégorie (enfant, ado, adulte).
int main() 
    {int age = 17;
    if (age < 13) {printf("enfant");}
    else if (13 < age  & age < 18) {printf("ado");}
    else {printf("adulte");}
    return 0;}