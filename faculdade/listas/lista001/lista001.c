#define ex01

#ifdef ex01
/*
1 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.
*/


int mult, limite, numatual, i;

main() {
printf("Neste programa voce devera informar 2 numeros inteiros.\n");
printf("O primeiro numero sera o numero multiplicado e o segundo numero sera o limite.\n");
printf("Apos isso o programa ira mostrar o menor multiplo do primeiro numero maior que o segundo numero.\n");
printf("Informe o primeiro numero (numero multiplicado): ");
scanf("%d", &mult);
printf("Informe o segundo numero (limite): ");
scanf("%d", &limite);

for (i = 1; numatual < limite; i++)
{
    numatual = mult * i;
}

printf("O  menor multiplo de %d maior que %d e %d.", mult, limite, numatual);
return 0;

}
#endif


#ifdef ex02
/*
2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char
*/

short num1 = 20000;
long num2 = 350000;
int num3 = 46000;
float num4 = 23000;
double num5 = 3299;
char letra1 = 65;

main(){
printf("        10        20        30        40        50        60\n");
printf("12345678901234567890123456789012345678901234567890123456789012345\n");
printf("%9d" ,num1);
printf("%19d" ,num2);
printf("%19d \n" ,num3);
printf("%19.0f" ,num4);
printf("%21.0f" ,num5);
printf("%18c\n" ,letra1);




}
#endif

#ifdef ex03
/*
3 - Escreva um programa que receba via teclado um tempo em segundos e converta
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.
*/
main(){
int valor1, valor2, horas, minutos, segundos;
printf("A funcao deste programa e converter qualquer valor em segundos para sua divisao entre horas, minutos e segundos.\n");
printf("Informe um valor em segundos para que a conversao seja feita: ");
scanf("%d", &valor1);

horas = valor1 / 3600;
valor2 = valor1 % 3600; /* para que possa a sobra da conta anterior e continuar calculando minutos */
minutos = valor2 / 60;
segundos = valor2 % 60; /* para que possa saber a sobra da conta anterior e continuar calculando segundos */

printf("\n%d horas, %d minutos e %d segundos." , horas, minutos, segundos);


}
#endif

#ifdef ex04
/* 4 - Escreva um programa que permute o conte�do de duas vari�veis sem utilizar uma
    vari�vel auxiliar. */

main(){
int n1, n2;
printf("Informe dois valores que serao armazenados em duas variaveis distintas, apos o funcionamento do programa os valores serao trocados entre as variaveis.");

printf("\n\n\tInforme o primeiro valor: ");
scanf("%d", &n1);
printf("\n\tInforme o segundo valor: ");
scanf("%d", &n2);

n1 = n1 + n2; /* ex: n1(15) = 15 + 5 => 20 */
n2 = n1 - n2; /* ex: n2(5) = 20 - 5 => 15 */
n1 = n1 - n2; /* ex: n1(20) = 20 - 15 => 5 */

printf("\n\tPrimeiro valor passa a ser %d e o segundo valor passa a ser %d.\n" , n1, n2);


}

#endif // ex04


#ifdef ex05
/* 5 - Escreva um programa que l� um valor em reais e calcula qual o menor n�mero
    poss�vel de notas de $100, $50, $20, $10, $5, $2 e $1 em que o valor lido pode
    ser decomposto. Escrever o valor lido e a rela��o de notas necess�rias. */

main(){
int n, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
int resto100, resto50, resto20, resto10, resto5, resto2;
printf("Este programa dividira o valor informado entre notas de 100, 50, 20, 10, 5, 2 e 1 real.\n");
printf("Informe o valor a ser dividido: ");
scanf("%d", &n);

nota100 = n/100;
resto100 = n%100;
nota50 = resto100/50;
resto50 = resto100%50;
nota20 = resto50/20;
resto20 = resto50%20;
nota10 = resto20/10;
resto10 = resto20%10;
nota5 = resto10/5;
resto5 = resto10%5;
nota2 = resto5/2;
resto2 = resto5%2;
nota1 = resto2/1;

printf("Este valor e dividido em: %d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d notas de 1.", nota100, nota50, nota20, nota10, nota5, nota2, nota1);
}

#endif // ex05
