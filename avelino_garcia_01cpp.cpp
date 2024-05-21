#include <stdio.h>

int main() {
    int numero, suma = 0;
    long long producto = 1;


    for(numero = 20; numero <= 200; numero++) {
        suma += numero;
        producto *= numero;
    }


    printf("La suma de los números entre 20 y 200 es: %d\n", suma);
    printf("El producto de los números entre 20 y 200 es: %lld\n", producto);

    return 0;
}
