# Soluciones a los ejercicios propuestos

Aquí se presentan las soluciones de algunos ejercicios propuestos en la sección de [Estructuras de Control Lógicas (Condicionales)](README.md#estructuras-de-control-lógicas-condicionales).

## Contenido

[Ejercicio 1](#ejercicio-1)

[Ejercicio 2](#ejercicio-2)

[Ejercicio 3](#ejercicio-3)

[Ejercicio 4](#ejercicio-4)

[Ejercicio 5](#ejercicio-5)

[Ejercicio 7](#ejercicio-7)

## Ejercicio 1

```c
// Archivo ejercicio1.c

#include <stdio.h>

int main() {
    
    int numero;

    printf("Introduce un número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El número es positivo.\n");
    } else if (numero < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es cero.\n");
    }

    return 0;
}

```

### Explicación del código

1. **Declaración de variables**:  
   Se declara una variable de tipo entero llamada `numero`, que almacenará el valor introducido por el usuario.

3. **Entrada de datos**:  
   Se muestra un mensaje al usuario pidiéndole que introduzca un número mediante `printf`. Luego, se utiliza `scanf` para leer el valor desde el teclado y almacenarlo en la variable `numero`.

4. **Estructura condicional**:  
   Se utiliza una estructura `if-else` para verificar si el número es positivo, negativo o igual a cero:
   - Si `numero > 0`, se imprime que el número es positivo.
   - Si `numero < 0`, se imprime que el número es negativo.
   - Si no se cumple ninguna de las condiciones anteriores, el número es igual a cero, y se imprime un mensaje indicando esto.

5. **Salida del programa**:  
   Una vez procesado e impreso el resultado, el programa termina con `return 0`, que indica que se ejecutó correctamente.

El código fuente de este ejercicio se encuentra [aquí](src/ejercicio1.c).

[Subir](#contenido)


## Ejercicio 2


```c
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
        printf("Ambos números son iguales.\n");
    }

    return 0;
}
```

### **Explicación del código**
1. **Entrada de datos:**
   - Se utilizan dos variables enteras `numero1` y `numero2` para almacenar los números introducidos por el usuario.
   - `scanf` lee los valores ingresados y los almacena en las variables correspondientes.

2. **Comparaciones:**
   - Si `numero1 < numero2`, los números están en orden creciente.
   - Si `numero1 > numero2`, están en orden decreciente.
   - Si son iguales (`numero1 == numero2`), se imprime un mensaje indicando esto.


El código fuente de este ejercicio se encuentra [aquí](src/ejercicio2.c).

[Subir](#contenido)


 ## Ejercicio 3

```c
// Archivo ejercicio3.c
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
```

### Explicación

En la entrada de datos se declaran tres variables enteras: `numero1`, `numero2` y `numero3`. Luego, se solicita al usuario que ingrese tres valores, uno por uno, usando `scanf`.
Condiciones:

La primera condición (`numero1 < numero2 && numero2 < numero3`) verifica si los tres números están en orden estrictamente creciente.

La segunda condición (`numero1 > numero2 && numero2 > numero3`) verifica si están en orden estrictamente decreciente.

Si no cumplen ninguna de las dos condiciones, significa que los números están en desorden o son iguales.

El código fuente de este ejercicio se encuentra [aquí](src/ejercicio3.c).

[Subir](#contenido)



## Ejercicio 4

```c
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
```

### Explicación del código

1. **Entrada de datos:**
   - Se declara una variable entera `numero` para almacenar el valor introducido por el usuario.
   - `scanf` lee el número desde el teclado.

2. **Operador módulo (%):**
   - El operador `%` calcula el residuo de la división del número por 2.
   - Si `numero % 2 == 0`, el residuo es 0, lo que significa que el número es divisible entre 2 (par).
   - Si el residuo no es 0 (`else`), el número es impar.

3. **Salida:**
   - Dependiendo de la condición, se imprime si el número es par o impar, incluyendo el número ingresado en el mensaje.

El código fuente de este ejercicio se encuentra [aquí](src/ejercicio4.c).

[Subir](#contenido)



## Ejercicio 5

```c
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
```

### Explicación del código

1. **Entrada de datos:**
   - La variable `numero` almacena el valor ingresado por el usuario.
   - `scanf` se utiliza para leer este valor desde el teclado.

2. **Condicionales:**
   - La primera condición (`numero > 100`) verifica si el número es mayor que 100.
   - La segunda condición (`numero < 100`) comprueba si es menor que 100.
   - Si ninguna de las dos es verdadera, el número es igual a 100 (else).

3. **Salida:**
   - Dependiendo del caso, se imprime si el número es mayor, menor o igual a 100.


El código fuente de este ejercicio se encuentra [aquí](src/ejercicio5.c).

[Subir](#contenido)



## Ejercicio 7

```c
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
```


### **Explicación del código**

1. **Entrada de datos:**
   - Se utiliza `float` para permitir notas con decimales (e.g., $6.5$, $7.8$).
   - El usuario introduce una nota y esta se almacena en la variable `nota`.

2. **Validación del rango:**
   - Si la nota está fuera del rango `[0, 10]`, se considera inválida y se imprime un mensaje de error.

3. **Clasificación de notas:**
   - Los rangos se evalúan con condicionales:
     - `0 <= nota < 5`: *Suspenso*
     - `5 <= nota < 7`: *Aprobado*
     - `7 <= nota < 9`: *Notable*
     - `9 <= nota < 10`: *Sobresaliente*
     - `nota == 10`: *Matrícula de honor*

4. **Salida:**
   - Se imprime la categoría de la nota en función del rango evaluado.


El código fuente de este ejercicio se encuentra [aquí](src/ejercicio7.c).

[Subir](#contenido)
