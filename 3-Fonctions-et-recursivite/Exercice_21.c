#include <stdio.h>
//21. Créer une fonction qui retourne le carré d’un nombre.

int carre(int n);

int main() {

    printf("%d",carre(5));
    return 0;

}

int carre(int n) {
    return n*n;
}