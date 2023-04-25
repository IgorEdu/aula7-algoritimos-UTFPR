/*
8. Sabe-se que o número Neperiano e = 2.7182818 ... (que é um número irracional) pode ser
calculado pela soma dos valores de uma série infinita, como mostrado abaixo:
Fazer um programa em C que calcule este número (e) considerando apenas as 15 (quinze) primeiras
parcelas.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    float NEPERIANO = 0;
    float FATORIAL = 1;
    int contador = 0;

    while(contador <= 15){
        float BASE_FATORIAL = contador;
        float FATORIAL = 1;
        while(BASE_FATORIAL > 1){
            FATORIAL = (FATORIAL * BASE_FATORIAL);
            BASE_FATORIAL = BASE_FATORIAL - 1;
        }
        NEPERIANO = (NEPERIANO + (1/FATORIAL));
        contador++;
    }

    printf("%.2f\n", NEPERIANO);

    system("pause");
    return 0;
}
