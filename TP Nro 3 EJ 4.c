/* 4. Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando
el resultado final. */

#include <stdio.h>

void copiarArreglo(int *origen, int *destino, int size) {
    for (int i = 0; i < size; i++) {
        *(destino + i) = *(origen + i); 
    }
}

int main() {
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arreglo_origen[i]); 
    }

    printf("\nArreglo copiado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arreglo_destino[i]);
    }

    return 0;
}

