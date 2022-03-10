#include <stdio.h>
#define ex03



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
int vet[5][5], i, j,x;

int main(){

/*2 - Receba via teclado valores do tipo int para uma matriz 5 x 5. Receba via
    teclado um valor x. O programa dever fazer a busca desse valor x na matriz
    e, ao final escrever a localizacao (linha e coluna) ou uma mensagem de
    �nao encontrado�.*/

printf("Neste programa montaremos uma matriz 5x5 com os valores que voce informar.\n");
printf("Para isso voce tera que informar diversos numeros.\n\n");
printf("\nInforme 5 numeros abaixo.\n");

printf("Informe numeros para o vetor:\n");

    for ( i=0; i<5; i++ )
            for ( j=0; j<5; j++ )
            {
            printf ("Elemento [%d][%d]: ", i, j);
            scanf ("%d", &vet[ i ][ j ]);
            }

printf("\nInforme qual valor voce deseja encontrar nessa matriz, caso o valor nao seja encontrado lhe informaremos: ");
scanf("%d", &x);

    for ( i=0; i<5; i++ ){
        for ( j=0; j<5; j++ )
        {
        if (vet[i][j] == x){
        printf("%d encontrado na posicao [%d][%d]." , x , i, j);
        printf("\nFim do programa.\n\n");
        return 0;
        }}}


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

int vetI[3], i=0;
long vetL[3];
unsigned vetU[3];
float vetF[3];
double vetD[3];
main(){

printf("Informe 3 numeros para serem armazenados como numeros int.\n");
for ( i = 0 ; i < 3; i++){
printf("Informe um numero: ");
scanf("%d" , &vetI[i]);}
printf("\nInforme 3 numeros para serem armazenados como numeros long.\n");
for ( i = 0 ; i < 3; i++){
printf("Informe um numero: ");
scanf("%ld" , &vetL[i]);}
printf("\nInforme 3 numeros para serem armazenados como numeros unsigned.\n");
for ( i = 0 ; i < 3; i++){
printf("Informe um numero: ");
scanf("%u" , &vetU[i]);}
printf("\nInforme 3 numeros para serem armazenados como numeros float.\n");
for ( i = 0 ; i < 3; i++){
printf("Informe um numero: ");
scanf("%f" , &vetF[i]);}
printf("\nInforme 3 numeros para serem armazenados como numeros double.\n");
for ( i = 0 ; i < 3; i++){
printf("Informe um numero: ");
scanf("%lf" , &vetD[i]);}


printf("\n\n        10        20        30        40        50\n");
printf("12345678901234567890123456789012345678901234567890\n");
printf("  %d" , vetI[0]);
printf("                 %ld" , vetL[0]);
printf("                 %ld\n" , vetU[0]);
printf("            %.2f", vetF[0]);
printf("              %.2lf\n", vetD[0]);
printf("  %d" , vetI[1]);
printf("                 %ld" , vetL[1]);
printf("                 %ld\n" , vetU[1]);
printf("            %.2f", vetF[1]);
printf("              %.2lf\n", vetD[1]);
printf("  %d" , vetI[2]);
printf("                 %ld" , vetL[2]);
printf("                 %ld\n" , vetU[2]);
printf("            %.2f", vetF[2]);
printf("              %.2lf\n", vetD[2]);


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


int vetA[2][3] = {0};
int vetB[2][3] = {0};
int vetC[1][3] = {0};
int i, j;
main(){
    
printf("Vetor A:\n");

    for ( i=0; i<2; i++ )
            for ( j=0; j<3; j++ )
            {
            printf ("Elemento [%d][%d]: ", i, j);
            scanf ("%d", &vetA[ i ][ j ]);
            }
    
printf("\nVetor B:\n");
    
    for ( i=0; i<2; i++ )
            for ( j=0; j<3; j++ )
            {
            printf ("Elemento [%d][%d]: ", i, j);
            scanf ("%d", &vetB[ i ][ j ]);
            }

printf("\nVetor C:\n");

    for ( i=0; i<2; i++ )
            for ( j=0; j<3; j++ )
            {
            vetC[i][j] = vetA[i][j] - vetB[i][j];
            printf("Elemento [%d][%d]: %d - %d = %d\n" , i , j, vetA[i][j], vetB[i][j], vetC[i][j]);
            }





}

#endif
