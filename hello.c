#include <stdio.h>

int fibo(int n){
    if(n < 0){
        return -1;
    }
    if(n < 2){
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}


int main(int argc, char const *argv[])
{
    int start, end, i, fibi;
    printf("Introduzca la cota inferior de la secuencia a generar: ");
    scanf("%d", &start);
    printf("\nAhora introduzcel la cota superior de la secuencia a generar: ");
    scanf("%d", &end);
    printf("\nLa secuencia de Fibonacci entre %d y %d es: ", start, end);
    for(i = start; i < end; i += 1){
        fibi = fibo(i);
        printf("%d, ", fibi);
    }
    fibi = fibo(end);
    printf("%d", fibi);
    printf("\n\n");
    return 0;
}
