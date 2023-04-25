/*5. Escreva um programa que realize o cálculo do fatorial de um número inteiro e positivo informado
pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int VALOR = 0, FATORIAL = 1;

    printf("Digite um valor para verificar seu fatorial: ");
    scanf("%d", &VALOR);
    if(VALOR > 0){
        printf("O fatorial de %d eh igual a: ", VALOR);
        while(VALOR > 1){
            FATORIAL = (FATORIAL * VALOR);
            VALOR = VALOR - 1;
        }
    }
    else{
        printf("Valor invalido, digite um valor maior que 0!\n");
    }
    printf("%d\n", FATORIAL);

    system("pause");
    return 0;
}
