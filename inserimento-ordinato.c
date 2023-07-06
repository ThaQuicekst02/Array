#include <stdio.h>
#define DIM 5
//si parte da un array vuoto, di dimensione logica 0 
//si inseriscono gli elementi uno ad uno, incrementando di 1 la dimensione logica
//se m > a [dl-1] si termina, altrimenti si assegna a[dl] = a[dl-1] e si continua
//se m > a [dl-2] si termina, altrimenti si assegna a[dl-1] = a[dl-2] e si continua
//e cosi via: se non si è terminato prima si arrverà ad assegnare a[1] = a[0]
//infine si assegna m all'ultimo elemento scalato verso destra
int main(void){
    int m, a[DIM], dl, i, j;
    
    for(dl = 0; dl < DIM; dl++) {
        scanf("%d", &m);
        j = dl;
        while (j > 0 && m < a[j-1]){
            a[j] = a[j-1];
            j--;
        }
        a[j] = m;
    }
    for(i = 0; i <dl; i++)
        printf("%d", a[i]);
    printf("\n");
}