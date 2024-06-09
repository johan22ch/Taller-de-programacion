#include <stdio.h>

int main() {
    int n;
    int suma = 0;

    // Ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    // Asegurarse si n es positivo
    if (n <= 0) {
        printf("El número debe ser un entero positivo.\n");
        return 1;
    }

    // Calcular la suma de los cuadrados utilizando un bucle for
    for (int i = 1; i <= n; i++) { //For proporciona una estructura compacta y fácil de entender para realizar iteraciones desde 1 hasta n
        suma += i * i;
    }

    // Imprimir el resultado
    printf("La suma de los cuadrados de los primeros %d números naturales es: %d\n", n, suma);
    return 0;
}