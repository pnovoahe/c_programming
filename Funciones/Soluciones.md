# Soluciones a los ejercicios propuestos

### Contenido

[Ejercicio 1](#ejercicio-1)

[Ejercicio 2](#ejercicio-2)
 
[Ejercicio 3](#ejercicio-3)
 
[Ejercicio 4](#ejercicio-4)


### Ejercicio 1 

En este ejercicio obtenemos como salida `2 2`. Sin embargo, al compilarlo es posible notar varias advertencias. Y es que `MiFuncion` es considerada como una declaración implícita, esto es, totalmente independiente del prototipo declarado como `mifunction`. Recordemos que *C* es un lenguaje sensible a las mayúsculas, con lo cual `MiFuncion` no es lo mismo que `mifunction`.

Concretamente, al compilar tenemos la siguiente salida:

```console
foo@bar:~$ gcc ejercicio1.c -o ejercicio1
ejercicio1.c: In function ‘main’:
ejercicio1.c:7:5: warning: implicit declaration of function ‘MiFuncion’; did you mean ‘mifuncion’? [-Wimplicit-function-declaration]
    7 |     MiFuncion(z);
      |     ^~~~~~~~~
      |     mifuncion
ejercicio1.c: At top level:
ejercicio1.c:11:6: warning: conflicting types for ‘MiFuncion’; have ‘void(int)’
   11 | void MiFuncion(int z) /* Definición de la función */
      |      ^~~~~~~~~
ejercicio1.c:7:5: note: previous implicit declaration of ‘MiFuncion’ with type ‘void(int)’
    7 |     MiFuncion(z);
      |     ^~~~~~~~~

```

Lo correcto aquí sería renombrar a `MiFunction` con `mifunction`. 

El código fuente de este ejercicio se encuentra [aquí](src/ejercicio1.c).

[Subir](#contenido)



### Ejercicio 2

A diferencia del anterior, aquí tanto el prototipo de nuestra función `Permuta` coincide con su implementación más abajo. Tenemos como salida `x = 1 y = 2`. 

El código fuente de este ejercicio se encuentra [aquí](src/ejercicio2.c).

[Subir](#contenido)

### Ejercicio 3

Aunque sintácticamente nuestro programa anterior estuvo correcto, no lo está semánticamente. Es decir, no hace lo que se requiere. Específicamente, no ocurre el intercambio de valores entre las variables `x` e `y`. La razón es que estamos olvidando pasar como referencia ambas variables en la llamada a `Permuta`. Si lo hacemos, podremos lograr que se modifiquen sus valores. 

Otro problema que tiene nuestro código es que, incluso garantizando la modificación de las variables, el intercambio no se estaría realizando correctamente. Esto se debe a que el valor inicial de `x`, y que es capturado en la variable auxiliar `temp`, no se usa para actualizar a `y`. Arreglando este detalle, nuestro código quedaría de la siguiente forma:

```c

// Archivo ejercicio3.c

#include <stdio.h>

void Permuta(int *y, int *x); /* Prototipo de la función */

int main(void){
    int x = 1;
    int y = 2;
    Permuta(&x, &y); // pasamos las referencias de las variables
    printf("x = %d y = %d\n", x, y);
    return(0);
}

/* Modificamos los argumentos para que capturen las 
   referencias a variables, esto es, con punteros a enteros. */
void Permuta(int *y, int *x){
    int temp;
    temp = *x; //desreferenciamos para obtener el valor
    *x = *y;
    *y = temp;
}
```

Ahora cuando ejecutamos nuestro código compilado, obtenemos la salida correcta:

```console
foo@bar:~$ gcc ejercicio3.c -o ejercicio3
foo@bar:~$ ./ejercicio3
x = 2 y = 1
```

El código fuente de este ejercicio se encuentra [aquí](src/ejercicio3.c).

[Subir](#contenido)


### Ejercicio 4

Para resolver este ejercicio es preciso conocer la fórmula del volumen de una esfera. Esta viene dada por:
```math
V(r) = \frac{4}{3} \pi r^3
```
donde $r$ es el radio. De manera que $V$ es *función* de la *variable* $r$.

```c

// Archivo ejercicio4.c

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

```
Aunque no era necesario para la solución del ejercicio, nótese que dado que $\frac{4}{3}\pi$ es siempre constante, hemos obtado por definirla como tal al inicio de nuestro programa `V_COEF`. Concretamente, como el producto de `4 / 3` y la constante `PI`. De esta forma, su valor es calculado por el compilador una única vez, y estará disponible para cualquier llamada posterior a `volumen_esfera`. Se reduce por tanto, el costo computacional de la función.

Tampoco era necesario programar una interacción con el usario para pedirle el radio. Otro detalle es que se pudo haber empleado `float` en lugar de `double` para la definición del radio y de la función  `volumen_esfera`.

Al probar nuestro programa para un caso en que el radio valga 2, tenemos la siguiente salida:


```console
foo@bar:~$ gcc ejercicio4.c -o ejercicio4
foo@bar:~$ ./ejercicio4
Introduzca el radio de la esfera: 2
El volumen de la esfera es 33.510 unidades cúbicas. 
```

El código fuente de este ejercicio se encuentra [aquí](src/ejercicio4.c).

[Subir](#contenido)


### Ejercicio 5

Al igual que en el ejercicio previo, aquí es preciso conocer cómo se calcula *la longitud de la hipotenusa de un triángulo rectángulo dados sus dos catetos*. La fórmula de Pitágoras nos dice cómo:

```math
h(c_1, c_2) = \sqrt{c_1^2 + c_2^2}
```

El detalle aquí es que necesitamos apoyarnos en alguna función para el cálculo de la raíz cuadrada. Incluyendo la biblioteca `math.h` en nuestro código, podemos hacer uso de `sqrt`.

```c
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
```

Para poder compilar correctamente, necesitamos indicar al compilador que enlace a la biblioteca math. Lo hacemos con el flag `-lm`. 

```console
foo@bar:~$ gcc ejercicio5.c -o ejercicio5.o -lm
foo@bar:~$ ./ejercicio5.o
Ingrese el valor del primer cateto: 3
Ingrese el valor del segundo cateto: 4.0
La longitud de la hipotenusa es: 5.00
```

El código fuente de este ejercicio se encuentra [aquí](src/ejercicio5.c).

[Subir](#contenido)