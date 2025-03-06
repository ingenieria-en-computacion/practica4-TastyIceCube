#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arreglo = NULL, *arreglo2 = NULL, num, cont; //se debe inicializar el apuntador a un valor NULL para evitar que pasen cosas raras
    printf("¿Cuántos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    arreglo = (int*)malloc(num *sizeof(int));
    if(arreglo != NULL){        
        for(cont =0; cont <num; cont++){
            printf("Ingresa el elemento %d del conjunto\n", cont+1);
            scanf("%d", (arreglo+cont));
        }
        printf("Vector reservado:\n\t[");
        for(cont =0; cont <num; cont++){
            printf("\t%d", *(arreglo + cont));            
        }
        printf("\t]\n");

        printf("Aumentando el espacio reservado al doble\n");
        num *=2;
        arreglo2 = (int*)realloc(arreglo, num*sizeof(int)); //esta funcion modifica el tamaño de memoria ya establecido
        //recibe la zona de memoria a cambiar, y recie el numero de elementos a añadir
        if(arreglo2 != NULL){ 
            arreglo = arreglo2;       
            for(; cont <num; cont++){
                printf("Ingresa el elemento %d del conjunto\n", cont+1);
                scanf("%d", (arreglo2+cont));
            }
            /*printf("Vector reservado:\n\t[");
            for(cont =0; cont <num; cont++){
                printf("\t%d", *(arreglo2 + cont));            
            }*/
            printf("\t]\n");    
             arreglo2 = (int*)realloc(arreglo, 2*sizeof(int));
             for(cont =0; cont <2; cont++){
                printf("\t%d", *(arreglo2 + cont));            
            }
            printf("\t]\n");
            
        }
        printf("Liberando el espacio reservado\n");

        free(arreglo);
        arreglo = arreglo2 = NULL;        
    }
    return 0;
}