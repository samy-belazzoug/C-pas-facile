#include <stdio.h>
//8. Déterminer si un nombre est pair ou impair.
int main() {
    int x = 7;
    if (x % 2 == 0) {
        printf("Pair");
    }
    else {
        printf("Impair");
    }
    return 0;
}