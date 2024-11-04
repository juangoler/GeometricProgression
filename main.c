#include <stdio.h>

int main() {
    int pg[10], inicial, razao;

    printf("Digite o número inicial da PG: ");
    scanf("%d", &inicial);
    printf("Digite a razão da PG: ");
    scanf("%d", &razao);

    pg[0] = inicial;
    for(int i = 1; i < 10; i++) {
        pg[i] = pg[i - 1] * razao;
    }

    printf("Os termos da PG são:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", pg[i]);
    }
    printf("\n");

    return 0;
}
