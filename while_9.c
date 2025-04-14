#include <stdio.h>

int main() {
    int n; 

    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);
    
    if (n == 0) {
        printf("Divisao por zero não eh permitida.\n");
        return 1;
    }

    printf("Numeros de 1 a 200 que divididos por %d dao resto 3 e sao pares:\n", n);
    
    for (int i = 1; i <= 200; i++) {
        if (i % n == 3 && i % 2 == 0) {
        printf("%d\n", i);
        }
    }

    return 0;
}
