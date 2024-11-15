#include <stdio.h>

int main() {
    float nota;

    // Pedir al usuario que introduzca una nota
    printf("Introduce la nota (0 a 10): ");
    scanf("%f", &nota);

    // Verificar la categoría de la nota
    if (nota >= 0 && nota < 5) {
        printf("Suspenso.\n");
    } else if (nota >= 5 && nota < 7) {
        printf("Aprobado.\n");
    } else if (nota >= 7 && nota < 9) {
        printf("Notable.\n");
    } else if (nota >= 9 && nota < 10) {
        printf("Sobresaliente.\n");
    } else if (nota == 10) {
        printf("Matrícula de honor.\n");
    } else {
        printf("Nota inválida. Por favor, introduce un número entre 0 y 10.\n");
    }

    return 0;
}
