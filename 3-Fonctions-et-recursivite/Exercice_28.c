#include <stdio.h>
//28. Trier un tableau avec le tri à bulles.
void tri_a_bulles(int tableau[],int taille);

int main() {
    int tab[] = {1, 3, 2, 6, 4, 5, 7, 9, 10, 8};
    int taille = sizeof(tab) / sizeof(tab[0]);

    printf("Tableau non trié : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    tri_a_bulles(tab, taille);

    printf("Tableau trié : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}

void tri_a_bulles(int tableau[],int taille) {
    int echanger;
    do  {
        echanger = 0; //echanger = faux
        for (int i = 0;i<taille-1;i++) {
            if (tableau[i] > tableau[i+1]) { //On procède à l'échange
                int j = tableau[i];
                tableau[i] = tableau[i+1];
                tableau[i+1] = j;
                echanger = 1;
            }
        }
    } while (echanger == 1);
}