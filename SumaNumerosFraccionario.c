#include <stdio.h>

int main() {
    int n;
    double suma = 0.0;

    // Ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    // Asegura si n es positivo
    if (n <= 0) {
        printf("El número debe ser un entero positivo.\n");
        return 1;
    }

    // Calcular la suma de la serie utilizando un bucle for
    for (int i = 1; i <= n; i++) { //For proporciona una estructura compacta y fácil de entender para realizar iteraciones desde 1 hasta n
        suma += 1.0 / i;
    }

    // Imprimir el resultado
    printf("La suma de la serie 1 + 1/2 + 1/3 + ... + 1/%d es: %f\n", n, suma);
    return 0;
}