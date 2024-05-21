#include <stdio.h>

int main() {
    int numero,i,contadorPares = 0,sumaPares = 0;

    for (i = 0; i < 10; i++) {
        printf("Ingrese un número entero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) { 
            contadorPares++;
            sumaPares += numero;
        }
    }

    if (contadorPares > 0) {
        float mediaPares = (float)sumaPares / contadorPares;
        printf("La suma de los números pares es: %d\n", sumaPares);
        printf("La cantidad de números pares es: %d\n", contadorPares);
        printf("La media aritmética de los números pares es: %.2f\n", mediaPares);
    } else {
        printf("No se ingresaron números pares.\n");
    }

    return 0;
}
