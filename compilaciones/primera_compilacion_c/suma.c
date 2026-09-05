#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = suma(5, 3);
    printf("Resultado: %d\n", resultado);
    return 0;
}