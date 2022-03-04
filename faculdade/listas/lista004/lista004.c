#include <stdio.h>
#define ex01

#ifdef ex01

main(){
/*
1 - Escreva um programa que receba um vetor de tamanho 10 e o decomponha em dois
    outros vetores. Um contera' as componentes de ordem �mpar e o outro contera'
    as componentes de ordem par.
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7}, o programa
    deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}. */

int vet[10], vetPar[10]={0}, vetImpar[10]={0}, i;

printf("Neste programa informaras 10 numeros e separarei-os em dois grupos, pares e impares.\n");
for (i = 0; i < 10; i++){

printf("Informe um numero: ");
scanf("%d" , &vet[i]);

}

i = 0;

for (i = 0; i < 10; i++){
if (vet[i] % 2 == 0){
vetPar[i] = vet[i];
} else {
vetImpar[i] = vet[i];
}

}

i = 0;

printf("\nNumeros pares encontrados:\n");

for (i = 0; i < 10; i++){

if (vetPar[i] != 0){
printf("[%d] ", vetPar[i]);
}

}

i = 0;

printf("\n\nNumeros impares encontrados:\n");
for (i = 0; i < 10; i++){

if (vetImpar[i] != 0){
printf("[%d] ", vetImpar[i]);
}


}

printf("\n\nFim do Programa.\n\n");

}



#endif // ex01

#ifdef ex02
int vet[5][5], i, x;

int main(){

/*2 - Receba via teclado valores do tipo int para uma matriz 5 x 5. Receba via
    teclado um valor x. O programa dever fazer a busca desse valor x na matriz
    e, ao final escrever a localizacao (linha e coluna) ou uma mensagem de
    �nao encontrado�.*/

printf("Neste programa montaremos uma matriz 5x5 com os valores que voce informar.\n");
printf("Para isso voce tera que informar diversos numeros.\n\n");
printf("\nInforme 5 numeros abaixo.\n");

for (i = 0; i < 5; i++)
{

printf("Informe um numero [1/5]: ");
scanf("%d", &vet[1][i]);

}

printf("\nInforme 5 numeros abaixo.\n");

for (i = 0; i < 5; i++)
{

printf("Informe um numero [2/5]: ");
scanf("%d", &vet[2][i]);

}

printf("\nInforme 5 numeros abaixo.\n");

for (i = 0; i < 5; i++)
{

printf("Informe um numero [3/5]: ");
scanf("%d", &vet[3][i]);

}

printf("\nInforme 5 numeros abaixo.\n");

for (i = 0; i < 5; i++)
{

printf("Informe um numero [4/5]: ");
scanf("%d", &vet[4][i]);

}

printf("\nInforme 5 numeros abaixo.\n");

for (i = 0; i < 5; i++)
{

printf("Informe um numero [5/5]: ");
scanf("%d", &vet[5][i]);

}

printf("\nInforme qual valor voce deseja encontrar nessa matriz, caso o valor nao seja encontrado lhe informaremos: ");
scanf("%d", &x);

for (i = 0; i < 5; i++)
{

if (vet[1][i] == x){
    printf("%d encontrado na posicao [1]-[%d]." , x , i+1);
    printf("\nFim do programa.\n\n");
    return 0;
}


}

for (i = 0; i < 5; i++)
{

if (vet[2][i] == x){
    printf("%d encontrado na posicao [2]-[%d]." , x , i+1);
    printf("\nFim do programa.\n\n");
    return 0;
}


}

for (i = 0; i < 5; i++)
{

if (vet[3][i] == x){
    printf("%d encontrado na posicao [3]-[%d]." , x , i+1);
    printf("\nFim do programa.\n\n");
    return 0;
}


}

for (i = 0; i < 5; i++)
{

if (vet[4][i] == x){
    printf("%d encontrado na posicao [4]-[%d]." , x , i+1);
    printf("\nFim do programa.\n\n");
    return 0;
}


}

for (i = 0; i < 5; i++)
{

if (vet[5][i] == x){
    printf("%d encontrado na posicao [5]-[%d]." , x , i+1);
    printf("\nFim do programa.\n\n");
    return 0;

}



}

printf("Numero nao encontrado, fim do programa.\n\n");

}
#endif

#ifdef ex03
/*3 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double                  */

int vetI[3]={0}, i=0;
long vetL[3]={0};
unsigned vetU[3]={0};
float vetF[3]={0};
double vetD[3]={0};
main(){

printf("Informe 3 numeros para serem armazenados como numeros int.\n");
for ( i = 0 ; i < 3; i++){
printf("Informe um numero: ");
scanf(" %d" , &vetI[i]);}
printf("\nInforme 3 numeros para serem armazenados como numeros long.\n");
for ( i = 0 ; i < 3; i++){
printf("Informe um numero: ");
scanf(" %ld" , &vetL[i]);}
printf("\nInforme 3 numeros para serem armazenados como numeros unsigned.\n");
for ( i = 0 ; i < 3; i++){
printf("Informe um numero: ");
scanf(" %u" , &vetU[i]);}
printf("\nInforme 3 numeros para serem armazenados como numeros float.\n");
for ( i = 0 ; i < 3; i++){
printf("Informe um numero: ");
scanf(" %f" , &vetF[i]);}
printf("\nInforme 3 numeros para serem armazenados como numeros unsigned.\n");
for ( i = 0 ; i < 3; i++){
printf("Informe um numero: ");
scanf(" %lf" , &vetD[i]);}


}

#endif // ex03


#ifdef ex04

/*4 - Receba via teclado dez valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores ordenados.
*/

main(){

return 0;

}

#endif

#ifdef ex05
/* 5 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    subtracao "-", subtraia os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores. */

main(){

return 0;

}

#endif