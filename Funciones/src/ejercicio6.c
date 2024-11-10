#include <stdio.h>

char evaluar_numero(int numero) {
    if (numero > 0) {
        return 'P';
    } else if (numero == 0) {
        return 'C';
    } else {
        return 'N';
    }
}

int main() {
    int numero;

    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    char resultado = evaluar_numero(numero);
    printf("Resultado: %c\n", resultado);

    return 0;
}
