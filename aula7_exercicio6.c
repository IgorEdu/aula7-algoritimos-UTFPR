
/*
Faça um programa que calcule e escreva o valor de S:
S= 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    float DIVISOR = 1, DIVIDENDO = 1;
    float RESULTADO = 0;

    while (DIVISOR <= 50 && DIVIDENDO <= 99){
        RESULTADO += (DIVIDENDO / DIVISOR);

        DIVISOR++;
        DIVIDENDO = DIVIDENDO + 2;
    }
    printf("%.2f\n", RESULTADO);

    system("pause");
    return 0;
}
