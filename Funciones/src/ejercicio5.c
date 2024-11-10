#include <stdio.h>
#include <math.h>

double calcular_hipotenusa(double cateto1, double cateto2) {
    return sqrt(cateto1 * cateto1 + cateto2 * cateto2);
}

int main() {
    double cateto1, cateto2;
    
    printf("Ingrese el valor del primer cateto: ");
    scanf("%lf", &cateto1);
    
    printf("Ingrese el valor del segundo cateto: ");
    scanf("%lf", &cateto2);
    
    double hipotenusa = calcular_hipotenusa(cateto1, cateto2);
    printf("La longitud de la hipotenusa es: %.2f\n", hipotenusa);
    
    return 0;
}