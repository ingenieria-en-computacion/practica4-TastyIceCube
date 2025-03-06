#include <stdio.h>
#include <stdlib.h>

int main() {
    int TamArr;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &TamArr);
    
    int *arr;
    arr = (int*)malloc(TamArr *sizeof(int));
    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Ingrese %d valores:\n", TamArr);
    for (int i = 0; i < TamArr; i++) {
        scanf("%p", arr+i);
    
    }

    printf("El arreglo es: \n");
    for (int i = 0; i < TamArr; i++) {
        printf("%d", arr+i);
    }
    printf("\n");

    
    return 0;
}
