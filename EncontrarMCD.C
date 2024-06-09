#include <stdio.h>

int main() {
    int num1, num2;
    
    // Ingrese los dos números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    int mcd = 1; // Inicializar el MCD con el valor mínimo posible
    
    // Calcular el MCD utilizando un bucle for
    for (int i = 1; i <= num1 && i <= num2; i++) { //For proporciona una estructura compacta y fácil de entender para realizar iteraciones desde 1 hasta n
        if (num1 % i == 0 && num2 % i == 0) {
            mcd = i; // Actualizar el MCD si encontramos un divisor común
        }
    }
    
    // Imprimir el resultado
    printf("El MCD de %d y %d es %d\n", num1, num2, mcd);
    printf("Muchas gracias mundo :D\n");

    return 0;
}