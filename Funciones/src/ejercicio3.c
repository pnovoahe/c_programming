#include <stdio.h>

void Permuta(int *y, int *x); /* Prototipo de la función */

int main(void){
    int x = 1;
    int y = 2;
    Permuta(&x, &y);
    printf("x = %d y = %d\n", x, y);
    return(0);
}

void Permuta(int *y, int *x){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}