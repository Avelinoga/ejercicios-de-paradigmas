#include <stdio.h>

int main() {
    int numero,mayor = 0;  
    
    do {
        printf("Ingrese un número positivo distinto de cero (-99 para terminar): ");
        scanf("%d", &numero);
        
        if (numero > mayor && numero != -99) {
            mayor = numero;
        }
    } while (numero != -99);

    if (mayor != 0) {
        printf("El número mayor de la serie es: %d\n", mayor);
    } else {
        printf("No se ingresaron números válidos.\n");
    }

    return 0;
}
