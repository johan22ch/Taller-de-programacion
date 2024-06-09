#include <stdio.h>

int invertir_numero(int numero) {
    int inverso = 0;
    
    // Manejo de números negativos
    int es_negativo = numero < 0;
    if (es_negativo) {
        numero = -numero;
    }

    // Invertir el número
    while (numero != 0) {
        inverso = inverso * 10 + numero % 10;
        numero /= 10;
    }

    // Si el número original era negativo, el inverso también lo será
    if (es_negativo) {
        inverso = -inverso;
    }

    return inverso;
}

int main() {
    int numero = 12567;
    int resultado = invertir_numero(numero);
    printf("El inverso de %d es %d\n", numero, resultado);
    return 0;
}
