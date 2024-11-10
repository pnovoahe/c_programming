#include <stdio.h>

void mifuncion(int z); /* Prototipo de la funcion */

int main(){
    int z = 2;
    MiFuncion(z);
    MiFuncion(z);
}

void MiFuncion(int z) /* Definición de la función */
{
    printf(" %d ", z);
    z++;
}