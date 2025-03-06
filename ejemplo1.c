#include <stdio.h>
#include <stdlib.h> //para memoria dinamica se usa esta libreria

int main(){
    int *arreglo, num, cont;
    printf("¿Cuántos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    arreglo = (int*)malloc(num *sizeof(int));
    if(arreglo != NULL){
        printf
        ("Vector reservado:\n\t["); //se verifica que el elemento no sea nulo
        for(cont =0; cont <num; cont++){
            printf("\t%d, %p", *(arreglo + cont), (arreglo+cont)); //serà contiguo la forma de almacenamiento en memoria            
        }
        printf("\t]\n");
        printf("Liberando el espacio reservado\n");
        free(arreglo);        
    }
    return 0;
}