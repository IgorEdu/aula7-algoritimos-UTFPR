/* 3. Escrever um programa que lê um número não conhecido de valores, um de cada vez, e conta
quantos deles estão em cada um dos intervalos: [0-24], [25-50] e fora deste intervalo.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int VALOR = 0, GRUPO_A = 0, GRUPO_B = 0, GRUPO_C = 0;
    int OPCAO = 0;

    while(1){
        printf("Digite um valor: ");
        scanf("%d", &VALOR);
        if ((VALOR >= 0) && (VALOR <= 24)){
            GRUPO_A++;
        }
        else if ((VALOR >= 25) && (VALOR <= 50)){
            GRUPO_B++;
        } else {
            GRUPO_C++;
        }
        printf("Deseja continuar informando valores?\n Digite 0 para continuar\n");
        scanf("%d", &OPCAO);
        if(OPCAO != 0){
            printf("Programa finalizado pelo usuario.\n");
            break;
        }
    }

    printf("Quantidade de numeros dentro do intervalo de 0 a 24: %d\n", GRUPO_A);
    printf("Quantidade de numeros dentro do intervalo de 25 a 50: %d\n", GRUPO_B);
    printf("Quantidade de numeros em outros intervalos: %d\n", GRUPO_C);

    system("pause");
    return 0;
}
