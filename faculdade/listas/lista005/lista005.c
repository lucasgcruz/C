#include <stdio.h>


#define ex01

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