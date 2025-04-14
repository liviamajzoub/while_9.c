#include <stdio.h>

int main() {
    int n; 

    // Lê o valor de n
    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);

    // Verifica se n é diferente de zero para evitar divisão por zero
    if (n == 0) {
        printf("Divisão por zero não é permitida.\n");
        return 1;
    }

    printf("Números de 1 a 200 que divididos por %d dão resto 3 e são pares:\n", n);
    
    for (int i = 1; i <= 200; i++) {
        if (i % n == 3 && i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
