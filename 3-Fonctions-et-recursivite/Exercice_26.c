#include <stdio.h>
/*26. Trouver le plus grand élément 
d’un tableau avec une fonction.*/
int maxim(int tab[],int size);

int main() {
    int tableau[] = {1,2,5,3,10,4,6,7,8};
    int length = sizeof(tableau) / sizeof(tableau[0]);
    printf("length = %d\n",length);
    printf("Le plus grand élément du tableau est : %d",maxim(tableau,length));
    return 0;
}

int maxim(int tab[],int size) {
    int maximum = tab[0];
    for (int i=0;i<size;i++) {
        if (tab[i] > maximum) {maximum = tab[i];}
    }
    
    return maximum;
}