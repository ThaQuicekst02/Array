#include <stdio.h>
#define DIM 10

int main(void) {
    int i, n;
    int a[DIM];
    printf("Inserisci un numero\n");
    scanf("%d", &n);

    //ForEach (assegna ad a[i] n + 1 + i, a)
    for (i = 0; i < DIM; i++)
        a[i] = n + 1 + i;
    
    //ForEach (stampa a)
    for (i = 0; i < DIM; i++)
        printf("%d\n", a[i]);
    return 0;
}
