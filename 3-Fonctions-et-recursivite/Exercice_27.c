#include <stdio.h>
#include <string.h> //pour avoir la fonction strlen()
//27. Vérifier si un nombre est palindrome.
int palindrome(char n[],int length);

int main() {
    char string[] = "123454321";
    printf("%d",palindrome(string,strlen(string)));
} 

int palindrome(char n[],int length) {
    //Renvoie 1 si n est palidrome et 0 sinon...
    int palindrome = 1; //status du nombre
    char inverse[length + 1];
    inverse[length] = '\0';

    //On procède à l'inversion de la chaîne.
    for (int i = 0; i < length; i++) {
        inverse[(length-1)-i] = n[i];
    }

    /*On retourne si inverse = n autrement dit,
    si n est un palindrome.*/
    if (strcmp(n,inverse) == 0) {return 1;} //compare deux chaines
    else {return 0;};
}