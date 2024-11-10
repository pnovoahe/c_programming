#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINEA 100

// Función para mostrar el contenido del archivo
void mostrar_estudiantes(FILE *archivo) {
    char linea[MAX_LINEA];
    
    // Leer y mostrar cada línea del archivo
    while (fgets(linea, MAX_LINEA, archivo) != NULL) {
        printf("%s", linea);
    }
    
    // Regresar al inicio del archivo para futuras lecturas
    rewind(archivo);
}

// Función para calcular el promedio total de todas las calificaciones
float promedio_total(FILE *archivo) {
    char linea[MAX_LINEA];
    float suma_total = 0.0;
    int contador_calificaciones = 0;
    
    // Leer cada línea y acumular las calificaciones
    while (fgets(linea, MAX_LINEA, archivo) != NULL) {
        char dni[20];
        float matematicas, lengua, historia, ingles;
        
        // Leer los valores de cada línea
        sscanf(linea, "%s %f %f %f %f", dni, &matematicas, &lengua, &historia, &ingles);
        
        // Sumar calificaciones al total
        suma_total += (matematicas + lengua + historia + ingles);
        contador_calificaciones += 4;
    }
    
    // Regresar al inicio del archivo para futuras lecturas
    rewind(archivo);
    
    // Calcular el promedio total
    return contador_calificaciones > 0 ? suma_total / contador_calificaciones : 0.0;
}

// Función para obtener la calificación en Inglés de un estudiante específico
float calificacion_alumno(FILE *archivo, const char *dni_buscado) {
    char linea[MAX_LINEA];
    char dni[20];
    float matematicas, lengua, historia, ingles;
    
    // Leer cada línea y buscar el DNI
    while (fgets(linea, MAX_LINEA, archivo) != NULL) {
        sscanf(linea, "%s %f %f %f %f", dni, &matematicas, &lengua, &historia, &ingles);
        
        // Comparar el DNI actual con el DNI buscado
        if (strcmp(dni, dni_buscado) == 0) {
            rewind(archivo);  // Regresar al inicio para futuras lecturas
            return ingles;    // Devolver la calificación en Inglés
        }
    }
    
    // Regresar al inicio del archivo si no se encontró el estudiante
    rewind(archivo);
    return -1;  // Indica que no se encontró el estudiante
}

int main() {
    char nombre_archivo[100];
    char dni_buscado[20];
    FILE *archivo;
    
    // Solicitar el nombre del archivo
    printf("Ingrese el nombre del archivo de entrada: ");
    scanf("%s", nombre_archivo);
    
    // Abrir el archivo en modo lectura
    archivo = fopen(nombre_archivo, "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    
    // Mostrar el contenido del archivo
    printf("\nContenido del archivo:\n");
    mostrar_estudiantes(archivo);
    
    // Calcular y mostrar el promedio total de calificaciones
    float promedio = promedio_total(archivo);
    printf("\nPromedio total de todas las calificaciones: %.1f\n", promedio);
    
    // Solicitar el DNI del estudiante para buscar su calificación en Inglés
    printf("\nIngrese el DNI del estudiante para obtener su calificación en Inglés: ");
    scanf("%s", dni_buscado);
    
    // Buscar y mostrar la calificación de Inglés del estudiante
    float calificacion = calificacion_alumno(archivo, dni_buscado);
    if (calificacion != -1) {
        printf("Calificación en Inglés del estudiante con DNI %s: %.2f\n", dni_buscado, calificacion);
    } else {
        printf("Estudiante con DNI %s no encontrado.\n", dni_buscado);
    }
    
    // Cerrar el archivo
    fclose(archivo);
    return 0;
}
