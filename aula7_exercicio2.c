
/* Escrever um programa que gera os números de 1000 a 1999 e escrever aqueles que divididos por
11 onde o resto da divisão é igual a 5.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int CONTADOR = 1000;
    printf("Numeros que estao entre 1000 e 1999 e que o resto da divisao por 11 eh igual a 5:\n");

    while(CONTADOR <= 1999){
        if(CONTADOR % 11 == 5){
            printf("%d\t", CONTADOR);
        }
        CONTADOR++;
    }
    printf("\n");
    system("pause");
    return 0;
}
