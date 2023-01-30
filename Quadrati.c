#include <stdio.h>
#include <math.h>
#define DIM 11

int main(void) {
    int a[DIM];
    int i;

    //implementazione ForEach, inizializiamo l'array ai quadrati dei primi 10 numeri naturali

    for (i = 1; i < DIM; i++)
        a[i] = i * i; 
    for (i = 1 ; i < DIM; i++)
        printf("%d\n", a[i]);
    return 0;
}