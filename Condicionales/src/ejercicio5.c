#include <stdio.h>

int main() {
    int numero;

    // Pedir al usuario que introduzca un número
    printf("Introduce un número: ");
    scanf("%d", &numero);

    // Comparar el número con 100
    if (numero > 100) {
        printf("El número %d es mayor que 100.\n", numero);
    } else if (numero < 100) {
        printf("El número %d es menor que 100.\n", numero);
    } else {
        printf("El número es exactamente 100.\n");
    }

    return 0;
}
