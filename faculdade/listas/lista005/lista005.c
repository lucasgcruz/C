#include <stdio.h>


#define ex04

#ifdef ex01


/*1 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:(Declare os vetores como variavel
    global)

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3
*/

char nome[5][8];

main(){
int i;
printf("Informe 5 nomes.\n\n");
for (i = 0; i < 5; i++)
{
printf("Nome %d: ", i+1);
scanf("%s" , &nome[i]);
}
printf("\n        10        20        30        40        50 \n");
printf("12345678901234567890123456789012345678901234567890 \n");
printf("  %s%40s\n" , nome[0] , nome[4]);
printf("            %s%20s\n" , nome[1] , nome[3]);
printf("                      %s\n" , nome[2]);






}


#endif

#ifdef ex02
/*2 - Receba 2 string de ate 10 caracteres via teclado na funcao main() e noutra
    funcao compare-as mostrando como resultado se são IGUAIS ou DIFERENTES na funcao
    main(). (Declare os vetores como variavel global)*/

comp(char nome[2][11]){

int x;

if (nome[0][0] == nome[1][0] && nome[0][1] == nome[1][1] && nome[0][2] == nome[1][2] && nome[0][3] == nome[1][3] && nome[0][4] == nome[1][4] && nome[0][5] == nome[1][5] && nome[0][6] == nome[1][6] && nome[0][7] == nome[1][7] && nome[0][8] == nome[1][8] && nome[0][9] == nome[1][9]) {

x = 1;

} else {

x = 0;

}
return x;
}

char nome[2][11];
main(){
int i, x;
printf("Informe duas strings.\n\n");
for (i = 0; i < 2; i++)
{
printf("String %d: ", i+1);
scanf("%s" , &nome[i]);
}

x = comp(nome);
if (x == 1) {
printf("\nAs strings sao iguais.\n");
}
else {
printf("\nAs strings sao diferentes.\n");
}
}


#endif

#ifdef ex03


/*3 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas.*/

char nome[11];
int i,x;
main(){

printf("Informe uma string de ate 10 caracteres:\n");
scanf("%s" , &nome);

for (i = 0; i < 10; i++){
nome[i] = nome[i]-32;
}

printf("Nome: %s", nome);

}

#endif

#ifdef ex04


/*4 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas.*/

char nome[11]={0};
int i;
main(){

printf("Informe uma string de letras maisculas com ate 10 caracteres:\n");
scanf("%s" , &nome);

for (i = 0; i < 10; i++){
if (nome[i] != 0 && nome[i]!='/0'){
nome[i] = nome[i]+32;}
}

printf("Nome: \n");
for (i = 0; i < 10; i++)
{
if (nome[i]!=0){
    printf("%c" , nome[i]);
}
}

}

#endif

#ifdef ex05

/*

    5 - Faca um programa que leia uma palavra (maximo de 20 letras) em uma funcao
    e some 1 no valor ASCII de cada caractere da palavra em outra funcao. Na sua
    funcao main() imprima a string resultante. (Declare o vetor como variavel
    global)

*/

char nome[21];
int i;
main(){

printf("Informe uma string de ate 20 caracteres:\n");
scanf("%s" , &nome[0]);
for (i = 0; i < 20; i++){
nome[i] = nome[i]+1;
}

printf("Palavra: %s", nome);
}

#endif