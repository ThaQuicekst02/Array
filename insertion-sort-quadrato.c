#include <stdio.h>
#define DIM 10

int main (void){
    int a[DIM];
    int dimlog, dl, m, j;
    // input
    dimlog = 0;
    do{
    printf("Inserisci un numero intero, 0 chiude tutto dioca");
    scanf("%d", &a[dimlog]);
    if (a[dimlog]==0)
        break;
    dimlog ++;
    } while (dimlog <DIM);

    //insertion sort

        for(dl = 0; dl < dimlog; dl++) {
        scanf("%d", &m);
        j = dl;
        while (j > 0 && m < a[j-1]){
            a[j] = a[j-1];
            j--;
        }
        a[j] = m;
    }

    return 0;
}