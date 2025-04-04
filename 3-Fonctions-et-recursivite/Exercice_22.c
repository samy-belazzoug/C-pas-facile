#include <stdio.h>
//22. Implémenter la factorielle en mode récursif.

int factorielle(int n);

int main() {printf("%d",factorielle(6));return 0;}

int factorielle(int n)
{if (n == 1) {return 1;}
else {return n*factorielle(n-1);}}