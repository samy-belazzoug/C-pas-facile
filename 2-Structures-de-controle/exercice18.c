#include <stdio.h>
//18. Lire un mois (1-12) et afficher son nombre de jours.
int main() {

int mois = 2;
switch (mois) 
    {
    case 1:
        printf("%i",31);
        break;
    case 2:
        int annee;printf("Année : ");scanf("%i",&annee);
        if (annee % 4) {printf("%i",28);}
        else {printf("%i",29);}
        break;
    case 3:
        printf("%i",31);
        break;
    case 5:
        printf("%i",31);
        break;
    case 7:
        printf("%i",31);
        break;
    case 8:
        printf("%i",31);
        break;
    case 10:
        printf("%i",31);
        break;
    case 12:
        printf("%i",31);
        break;
    default:
        printf("%i",30);}
    return 0;
}