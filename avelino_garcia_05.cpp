#include <stdio.h>

int main() {
    int numero,i,contadorPares = 0,sumaPares = 0;

    for (i = 0; i < 10; i++) {
        printf("Ingrese un n�mero entero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) { 
            contadorPares++;
            sumaPares += numero;
        }
    }

    if (contadorPares > 0) {
        float mediaPares = (float)sumaPares / contadorPares;
        printf("La suma de los n�meros pares es: %d\n", sumaPares);
        printf("La cantidad de n�meros pares es: %d\n", contadorPares);
        printf("La media aritm�tica de los n�meros pares es: %.2f\n", mediaPares);
    } else {
        printf("No se ingresaron n�meros pares.\n");
    }

    return 0;
}
