/*
8. Sabe-se que o n�mero Neperiano e = 2.7182818 ... (que � um n�mero irracional) pode ser
calculado pela soma dos valores de uma s�rie infinita, como mostrado abaixo:
Fazer um programa em C que calcule este n�mero (e) considerando apenas as 15 (quinze) primeiras
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
