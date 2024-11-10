# Funciones

A continuación se proponen varios ejercicios para profundizar en el contenido de *funciones* en C.

## Contenido

[Ejercicio 1](#ejercicio-1)

[Ejercicio 2](#ejercicio-2)

[Ejercicio 3](#ejercicio-3)

[Ejercicio 4](#ejercicio-4)

[Ejercicio 5](#ejercicio-5)

[Ejercicio 6](#ejercicio-6)

## Ejercicios propuestos


### Ejercicio 1. 

¿Cual es la salida del siguiente programa?

```c
#include <stdio.h>
void mifuncion(int z); /* Prototipo de la funcion */
int main() {
    int z = 2;
    MiFuncion(z);
    MiFuncion(z);
}

/* Definición de la función */
void MiFuncion(int z) {
    printf(" %d ", z);
    z++;
}
```

### Ejercicio 2. 

a. ¿Cual es la salida del siguiente programa?

```c
#include <stdio.h>

void Permuta(int y, int x); /* Prototipo de la función */

int main(void){
    int x = 1;
    int y = 2;
    Permuta(x, y);
    printf("x = %d y = %d\n", x, y);
    return(0);
}

void Permuta(int y, int x){
    int temp;
    temp = x;
    x = y;
    y = x;
}
```

### Ejercicio 3

Modifica el programa anterior para que los cambios en la función `Permuta` se vean reflejados en el programa principal.

### Ejercicio 4

Escribir una función que calcule el volumen de una esfera para un radio dado.

### Ejercicio 5

Escribir una función que calcule la longitud de la hipotenusa de un triángulo rectángulo dados sus dos catetos.

### Ejercicio 6 

Escribir una función que reciba un entero y que devuelva la letra P si el número
es positivo, C si es cero y la letra N si el número es negativo.

### Ejercicio 7

Escribir una función que reciba como datos la longitud y anchura de un rectángulo y devuelva su área y su perímetro.

### Ejercicio 8

Escribir una función para convertir las coordenadas polares (r; t) de un punto
P a las coordenadas rectangulares (x; y), donde: x = r cos(t) , y = r sen(t).

### Ejercicio 9

Escribir una función que reciba un array de números enteros y devuelva su suma.

### Ejercicio 10

Escribir una función que reciba un array de números enteros y devuelva su máximo.

### Ejercicio 11
Crear una función que pase una cadena de minúsculas a mayúsculas.
Nota: utilizar la función del C toupper que recibe un carácter en minúscula y lo pasa a mayúscula. Incluir `<ctype.h>`.

### Ejercicio 12 

Dada una matriz cuadrada: int `matriz[N][N]`; escribir una función para determinar su traza (suma de los elementos de la diagonal).

### Ejercicio 13
Dada una matriz cuadrada: int `matriz[N][N]`; escribir funciones para determinar si:

a) La matriz es simétrica: $a_{ij} = a_{ji}$.

b) La matriz es antisimétrica: $a_{ij} \neq a_{ji}$.

c) La matriz es diagonal.

### Ejercicio 14

Escribir una estructura para representar un número complejo y escribir funciones para calcular:

a). El módulo de un número complejo.
    
b) Cambiar de signo un número complejo.

c) El conjugado de un número complejo.

d) Determinar si un número complejo es cero.

e) La suma de dos números complejos.

f) La diferencia de dos números complejos.

g) El producto de dos números complejos.

h) El cociente de dos números complejos.


# Soluciones

Las soluciones aparecen [aquí](Soluciones.md).