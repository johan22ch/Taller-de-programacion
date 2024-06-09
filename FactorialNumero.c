#include <stdio.h>

// Función para calcular el factorial de un número
unsigned long long factorial(int n) {
    unsigned long long resultado = 1; // Usamos unsigned long long para manejar números grandes
    for (int i = 1; i <= n; i++) {  //For proporciona una estructura compacta y fácil de entender para realizar iteraciones desde 1 hasta n
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero = 5;
    unsigned long long resultado = factorial(numero);
    printf("El factorial de %d es %llu\n", numero, resultado);
    return 0;
}
