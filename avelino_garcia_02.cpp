#include <stdio.h>

int main() {
    int sumaPares = 0,sumaImpares = 0;
    
    for (int i = 1; i <= 200; i++) {
        if (i % 2 == 0) {
            
            sumaPares += i;
        } else {
            
            sumaImpares += i;
        }
    }

    printf("La suma de los n�meros pares entre 1 y 200 es: %d\n", sumaPares);
    printf("La suma de los n�meros impares entre 1 y 200 es: %d\n", sumaImpares);

    return 0;
}
