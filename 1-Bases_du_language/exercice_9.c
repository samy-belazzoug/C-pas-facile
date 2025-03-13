#include <stdio.h>
//9. Lire trois nombres et afficher le plus grand.
int main() {
    int x = 23;
    int y = 13;
    int z = 70;
    int plusGrandNombre = 0;
    int i;
    for (i=0;i<6;i++) {
        if (x >= plusGrandNombre) {
            plusGrandNombre = x;
        }
        if (y >= plusGrandNombre) {
            plusGrandNombre = y;
        }
        if (z >= plusGrandNombre) {
            plusGrandNombre = z;
        }
    }
    printf("%d",plusGrandNombre);
    return 0;
}