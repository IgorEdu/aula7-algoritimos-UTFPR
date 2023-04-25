/*4. Escrever um programa semelhante ao anterior que calcula as médias aritméticas de cada intervalo
e as escreve, juntamente com o número de valores de cada intervalo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int VALOR = 0, GRUPO_A = 0, GRUPO_B = 0, GRUPO_C = 0, SOMA_A = 0, SOMA_B = 0, SOMA_C = 0;
    char OPCAO;

    while(1){
        printf("Digite um valor: ");
        scanf("%d", &VALOR);
        if (VALOR >= 0 && VALOR <= 24){
            GRUPO_A++;
            SOMA_A += VALOR;
        }
        else if (VALOR >= 25 && VALOR <= 50){
            GRUPO_B++;
            SOMA_B += VALOR;
        } else {
            GRUPO_C++;
            SOMA_C += VALOR;
        }
        printf("Deseja continuar informando valores?\n Digite N para parar\n");
        fflush(stdin);
        scanf("%c", &OPCAO);
        if(toupper(OPCAO) == 'N'){
            printf("Programa finalizado pelo usuario.\n");
            break;
        }

    }
    printf("Quantidade de numeros dentro do intervalo de 0 a 24: %d\n", GRUPO_A);
    printf("Media aritimetica dos numeros dentro do intervalo de 0 a 24: %d\n", (SOMA_A/GRUPO_A));
    printf("Quantidade de numeros dentro do intervalo de 25 a 50: %d\n", GRUPO_B);
    printf("Media aritimetica dos numeros dentro do intervalo de 25 a 50: %d\n", (SOMA_B/GRUPO_B));
    printf("Quantidade de numeros em outros intervalos: %d\n", GRUPO_C);
    printf("Media aritimetica dos numeros em outros intervalos: %d\n", (SOMA_C/GRUPO_C));

    system("pause");
    return 0;
}
