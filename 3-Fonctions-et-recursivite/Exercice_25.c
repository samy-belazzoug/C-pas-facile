#include <stdio.h>
//25. Implémenter Fibonacci récursif et itératif.
int fibo_iteratif(int n);
int fibo_recursif(int n);

int main() {
    //fibo_iteratif(8);
    printf("%d",fibo_recursif(9));
    return 0;
}

int fibo_iteratif(int n) {
    int compteur = 0;
    int a = 0;
    int b = 1;
    while (compteur < n) {
        int result = a+b;
        a = b;
        b = result;
        printf("%d\n",result);
        compteur ++;
    }
}

int fibo_recursif(int n) {
    int i;  int a = 0;  int b = 1;
    if (n == 0) {return 0;}
    if (n == 1) {return 1;}
    else {
    return  fibo_recursif(n-1) + fibo_recursif(n-2);} 
}