#include <stdio.h>
#include <conio.h>

main(){
int a,b,c;
int *res;
res = &c;

printf("Programa simples de soma.\n");
printf("Informe dois numeros a serem somados:\n\n");
scanf("%d", &a);
scanf("%d", &b);
c = a + b;
printf("\nResultado: %d\n", c);
printf ("Resultado Ponteiro: %d\n\n", *res);
printf("Endereco C: %x\n", &c);
printf ("Endereco C Ponteiro: %x", res);
printf ("\nEndereco Ponteiro: %x", &res);
printf("\n\nFim do programa.");


}