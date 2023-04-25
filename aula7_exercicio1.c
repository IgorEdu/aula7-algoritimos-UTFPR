/*Escreva um programa que leia 8 valores inteiros positivos,
1 de cada vez,
e encontre e escreva o maior deles
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int VALOR = 0, MAIOR = 0, cont = 1;


    while(cont <= 8){
        printf("Digite o valor %d: ", cont);
        scanf("%d", &VALOR);
        if (VALOR >= 0){
            if (VALOR > MAIOR){
            MAIOR = VALOR;
            }
            cont++;
        }
        else{
            printf("\nDigite um valor positivo.\n");
        }
    }

    printf("O maior valor digitado eh: %d\n", MAIOR);

    system("pause");
    return 0;
}
