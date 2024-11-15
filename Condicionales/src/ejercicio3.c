#include <stdio.h>

int main() {
    int numero1, numero2, numero3;

    // Pedir al usuario que introduzca tres números
    printf("Introduce el primer número: ");
    scanf("%d", &numero1);

    printf("Introduce el segundo número: ");
    scanf("%d", &numero2);

    printf("Introduce el tercer número: ");
    scanf("%d", &numero3);

    // Verificar si los tres números están en orden creciente
    if (numero1 < numero2 && numero2 < numero3) {
        printf("Los números están en orden creciente.\n");
    } else if (numero1 > numero2 && numero2 > numero3) {
        printf("Los números están en orden decreciente.\n");
    } else {
        printf("Los números no están en un orden estricto creciente o decreciente.\n");
    }

    return 0;
}
