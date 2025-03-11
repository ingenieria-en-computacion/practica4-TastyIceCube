#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    printf("Ingrese el número de filas: ");
    scanf("%i", &m);
    printf("Ingrese el número de columnas: ");
    scanf("%i", &n);

    // Asigna memoria para la matriz usando calloc
    int *matrix = (int *)calloc(m * n, sizeof(int));
    if (matrix == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Matriz inicializada con ceros:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i * n + j]); // Corrige el formato y la referencia
        }
        printf("\n");
    }

    printf("Ingrese las coordenadas (fila, columna) y el valor para modificar (ej. 1 2 5):\n");
    int row, col, value;
    scanf("%d %d %d", &row, &col, &value); // Lee los valores solicitados

    // Valida las coordenadas ingresadas
    if (row > 0 && row <= m && col > 0 && col <= n) {
        matrix[(row - 1) * n + (col - 1)] = value;
    } else {
        printf("Coordenadas fuera de rango.\n");
    }

    printf("Matriz actualizada:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i * n + j]); // Muestra la matriz actualizada
        }
        printf("\n");
    }

    free(matrix); // Libera la memoria asignada
    return 0;
}
