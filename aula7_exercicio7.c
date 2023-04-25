/*
7. Sendo H = 1 + 1/2 + 1/3 + 1/4 +...+ 1/N, prepare um algoritmo para gerar o número H. O número
N é fornecido pelo usuário.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    float N = 0;
    float H = 1;

    printf("Informe o valor que deseja realizar o calculo: ");
    scanf("%f", &N);
    while(N > 1){
        H = (H + (1/N));
        printf("%.2f\n", H);
        N = N-1;
    }

    system("pause");
    return 0;
}
