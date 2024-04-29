/* 3. Encontrar el mayor y el menor elemento de un arreglo usando punteros y
funciones. */

#include <stdio.h>

void encontrarMayorYMenor(int *arr, int size, int *mayor, int *menor) {
    *mayor = *arr;
    *menor = *ar
int main() {
    int arreglo[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(arreglo) / sizeof(arreglo[0]); 
    int mayor, menor;

    encontrarMayorYMenor(arreglo, size, &mayor, &menor);

    printf("El mayor elemento del arreglo es: %d\n", mayor);
    printf("El menor elemento del arreglo es: %d\n", menor);

    return 0;
}
