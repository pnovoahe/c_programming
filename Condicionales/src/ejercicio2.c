#include <stdio.h>

int main() {
    int numero1, numero2;

    // Pedir al usuario que introduzca los dos números
    printf("Introduce el primer número: ");
    scanf("%d", &numero1);

    printf("Introduce el segundo número: ");
    scanf("%d", &numero2);

    // Comparar los dos números para determinar si están en orden creciente
    if (numero1 < numero2) {
        printf("Los números están en orden creciente.\n");
    } else if (numero1 > numero2) {
        printf("Los números están en orden decreciente.\n");
    } else {
        printf("Los números son iguales.\n");
    }

    return 0;
}
