/*9. Escreva um programa que calcule e apresente a s�rie de fibonacci. A quantidade de termos a
serem apresentados devem ser informados pelo usu�rio. Apresente tamb�m a somat�ria de todos
os termos exibidos pela s�rie de fibonacci solicitada.
S�rie de Fibonacci = �1, 1, 2, 3, 5, 8, 13, 21, 34, 55�
*/

int main() {
    int A = 0;
    int B = 1;
    int C = 0;
    int QUANT_TERMOS = 0;
    int contador = 0;

    printf("Digite a quantidade de termos que deseja verificar da sequencia de Fibonacci: ");
    scanf("%d", &QUANT_TERMOS);

    printf("%d ", A);
    printf("%d ", B);
    while (contador < QUANT_TERMOS) {
        C = A + B;
        A = B;
        B = C;
        printf("%d ", C);
        contador++;
    }


    system("pause");
    return 0;
}
