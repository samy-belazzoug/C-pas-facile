#include <stdio.h>
//19. Vérifier si une année est bissextile.

int main() {
    int annee;
    printf("Entrez une année : ");scanf("%i",&annee);
    if (annee % 4 == 0) {printf("Bissextile.");}
    else {printf("Non.");}
    return 0;
}