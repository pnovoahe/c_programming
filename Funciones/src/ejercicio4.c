#include <stdio.h>

#define PI 3.14159265358979323846
#define V_COEF 4.0 / 3.0 * PI

double volumen_esfera(double r);

int main(int argc, char const *argv[]){
    double radio;
    printf("Introduzca el radio de la esfera: ");
    scanf("%lf", &radio);
    double volumen = volumen_esfera(radio);
    printf("El volumen de la esfera es %.3f unidades cúbicas. \n", volumen);
    return 0;
}

double volumen_esfera(double r){
    return V_COEF * r * r * r;
}
