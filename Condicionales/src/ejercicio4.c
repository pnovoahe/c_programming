#include <stdio.h>

int main() {
    int numero;

    // Pedir al usuario que introduzca un número
    printf("Introduce un número: ");
    scanf("%d", &numero);

    // Verificar si el número es par o impar utilizando el operador módulo (%)
    if (numero % 2 == 0) {
        printf("El número %d es par.\n", numero);
    } else {
        printf("El número %d es impar.\n", numero);
    }

    return 0;
}