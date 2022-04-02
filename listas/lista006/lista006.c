/*
OBS.: Faça um loop infinito e defina uma saida em todos os exercícios.

1 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.

2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta.

3 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
    data (dia, mes e ano) atual.

4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.

5 - Escreva um programa que receba via teclado um valor e tenha o menu abaixo.
       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit em Celsius e Kelvin
       3 - transforma graus Kelvin em Celsius e Fahrenheit
    Cada opcao de menu deve chamar uma funcao que retorna o resultado da
    conversao. O resultado deve ser mostrado na funcao main().
*/

#include <stdio.h>

#define ex05

#ifdef ex01

int n1, n2;

main(){

printf("Informe dois numeros inteiros para calculo das operacoes aritmeticas:\n");
printf("Primeiro numero: ");
scanf("%d" , &n1);
printf("Segundo numero: ");
scanf("%d" , &n2);

printf("\nResultados:\n");
printf("Adicao\n");
printf("%d\n" , n1+n2);
printf("Subtracao\n");
printf("%d\n" , n1-n2);
printf("Divisao\n");
printf("%.2f\n", (float)n1/(float)n2);
printf("Multiplicacao\n");
printf("%d\n" , n1*n2);



}


#endif // ex01

#ifdef ex02

int n, m;
float fn, fm;

main(){

printf("Informe dois numeros inteiros para calculo das operacoes aritmeticas:\n");
printf("Primeiro numero: ");
scanf("%d" , &n);
printf("Segundo numero: ");
scanf("%d" , &m);

fn = n;
fm = m;

printf("\nResultados:\n");
printf("Adicao\n");
printf("%d\n" , n+=m);
printf("Subtracao\n");
printf("%d\n" , n-=m);
printf("Divisao\n");
printf("%.2f\n",fn/=fm);
printf("Multiplicacao\n");
printf("%d\n" , n*=m);

}

#endif

#ifdef ex03

int dN, mN, aN; // diaNascimento, mesNascimento, anoNascimento
int dA, mA, aA; // diaAtual, mesAtual, anoAtual
int dR, mR, aR; // diaResultado, mesResltado, anoResultado
int dT; // diasTotal.
int i;

main(){
printf("Este programa calculara sua idade.\n\n");
printf("Informe a data do seu nascimento em dia, mes e ano.\n");

  do
    {
    printf("Dia do nascimento: ");
    scanf("%d" , &dN);
    if (dN>31 || dN<1)
    printf("\nDia invalido!\n");
    }
    while (dN>31 || dN<1);

  do
    {
    printf("Mes do nascimento: ");
    scanf("%d" , &mN);
    if (mN>12 || mN<1)
    printf("\nMes invalido!\n");
    }
    while (mN>12 || mN<1);

printf("Ano do nascimento: ");
scanf("%d" , &aN);

printf("\nInforme a data atual em dia, mes e ano.\n");

  do
    {
    printf("Dia atual: ");
    scanf("%d" , &dA);
    if (dA>31 || dA<1)
    printf("\nDia invalido!\n");
    }
    while (dA>31||dA<1);

  do
    {
    printf("Mes atual: ");
    scanf("%d" , &mA);
    if (mA>12||mA<1)
    printf("\nMes invalido!\n");
    }
    while (mA>12||mA<1);

  do
    {
 
    printf("Ano atual: ");
    scanf("%d" , &aA);
    if (aA<aN)
    printf("\nAno atual menor que ano de nascimento!\n");
    }
    while (aA<aN);

  
}
#endif ex03

#ifdef ex04

main()
{
int a,b;
 
printf("Digite um numero\n");
         scanf("%d",&a);
printf("Digite outro numero\n");
        scanf("%d",&b);
 
printf(" Operacoes bit-a-bit\n");
printf(" AND                 a & b --> %3d   0x%x\n",a & b,a & b);
printf(" OU                  a | b --> %3d   0x%x\n",a | b,a | b);
printf(" OU EXCLUSIVO        a ^ b --> %3d   0x%x\n",a ^ b,a ^ b);
}

#endif

#ifdef ex05
main ()
{
   // Escreva um programa que receba via teclado um valor e tenha o menu abaixo.
   //    1 - transforma graus Celsius em Fahrenheit e Kelvin
    //   2 - transforma graus Fahrenheit em Celsius e Kelvin
    //   3 - transforma graus Kelvin em Celsius e Fahrenheit
    //Cada opcao de menu deve chamar uma funcao que retorna o resultado da
   // conversao. O resultado deve ser mostrado na funcao main().

   int op,c, f,k;

   printf ("\tCONVERSÃO DE TEMPERATURA\n");
   printf ("Escolha a opcao desejada abaixo:\n");
   printf (" 1 - transforma graus Celsius em Fahrenheit e Kelvin\n");
   printf (" 2 - transforma graus Fahrenheit em Celsius e Kelvin\n");
   printf (" 3 - transforma graus Kelvin em Celsius e Fahrenheit\n");
   scanf ("%d", &op);
   switch (op){
     case 1:
        printf ("Digite a temperatura em Celsius: ");
         scanf ("%d", &c);
          f = ctof( c);
          k = ctok( c);
          printf ("A temperatura convertida para fahrenheit %d\n", f);
          printf ("A temperatura convertida para Kelvin  %d\n", k);
         break;

     case 2:
         printf ("Digite a temperatura em Fahrenheit: ");
         scanf ("%f", &f);
         c = ftoc( f);
         k = ftok ( f);
        printf ("A temperatura convertida para Celsius fica %d\n", c);
        printf ("A temperatura convertida para Kelvin fica %d\n", k);
        break;

     case 3:
        printf ("Digite a temperatura em Kelvin: ");
        scanf ("%d", &k);
        f = ktof( k);
        c = ktoc(k);
        printf ("A temperatura convertida para celsius %d\n", c);
        printf ("A temperatura convertida para Fahrenheit %d\n ", f);
        break;

   }
}

int ctof (int c)

{
      int f;
         f = (c * 9/5) + 32;
         return f;
}


int ctok(int c)
{    int k;
          k = c + 273.15;
          return k;
}


int ftoc (int f)
{
    int c;
        c = (f - 32) *5 / 9;
        return c;
}

int ftok(int f)
{
    int k;
     k = ((f-32)*5/9 )+273;
     return k;
}
int ktof (int k)
{
     int f;
        f = ((k-273) * 1.8) + 32;
        return f;

}

int ktoc (int k )
{
    int c;
    c = k - 273;
    return c;
}
#endif