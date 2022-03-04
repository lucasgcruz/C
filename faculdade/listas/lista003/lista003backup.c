/*

			EXERCICIOS

*****************************************************************************
OBS.: Todos os programa devem ser finalizados pelo usuario.

1 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main().

2 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch). As operacoes
    aritmeticas devem estar em funcoes. O resultado deve ser mostrado na
    funcao main()

3 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return). O vetor deve ser uma variavel global.

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y

4 - Fa�a um programa receba dois n�meros inteiros e execute as seguintes fun��es:
    - Verificar se o n�mero digitado � positivo ou negativo. Sendo que o valor de
      retorno ser� 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 n�meros s�o positivos, retorne a soma dos N n�meros existentes entre
      eles.
    - Se os 2 n�meros s�o negativos, retorne a multiplica��o dos N n�meros existente
      entre eles.

5 - Escreva um programa que receba um numero N. Escreva uma fun��o que
    retorne a soma dos algarismos de N!. O resultado deve ser mostrado na funcao
    main().
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos �e 2 + 4 = 6.
*/

#define ex05

#ifdef ex01

fsoma (int n1, int n2) {
return n1 + n2;
}

fsubtracao (int n1, int n2) {
return n1 - n2;
}

float fdivisao (float n1, float n2) {
return n1/n2;

}

fmultiplicacao (int n1, int n2) {
return n1 * n2;
}


main () {

int n1, n2;
printf("Digite dois valores inteiros.\n");
printf("Primeiro valor: ");
scanf("%d" , &n1);
printf("Segundo valor: ");
scanf("%d" , &n2);
int soma = fsoma(n1, n2);
printf("\nA soma entre os dois valores e %d.\n" , soma);
int subtracao = fsubtracao(n1, n2);
printf("A subtracao entre os dois valores e %d.\n" , subtracao);
float divisao = fdivisao(n1,n2);
printf("A divisao entre os dois valores e %.1f.\n" , divisao);
int multiplicacao = fmultiplicacao(n1,n2);
printf("A multiplicacao entre os dois valores e %d.\n" , multiplicacao);



}


#endif // ex01

#ifdef ex02

main () {

int n1, n2;
float n3,n4;
char opcao;
char cf = 's';
while (cf == 's' || cf == 'S') {
printf("Digite dois valores inteiros.\n");
printf("Primeiro valor: ");
scanf("%d" , &n1);
printf("Segundo valor: ");
scanf("%d" , &n2);
printf("Informe que tipo de operacao aritmetica deseja fazer: \n(+) - Soma\n(-) - Subtracao\n(*) - Multiplicacao\n(/) - Divisao\n");
printf("A operacao que voce deseja fazer e: ");
scanf(" %c" , &opcao);



switch (opcao) {

    default:
      printf("Sinal de operacao invalido.");
    break;

case '+':
printf("Resultado: %d" , n1+n2);
break;

case '-':
printf("Resultado: %d" , n1-n2);
break;


case '*':
printf("Resultado: %d" , n1*n2);
break;


case '/':
n3 = n1;
n4 = n2;
printf("Resultado: %.1f" , n3/n4);
break;



}

printf("\nDeseja continuar calculando? (S/N):\n");
scanf(" %c", &cf);

}

return 0;

}

#endif // ex02

#ifdef ex03

main(){





}

#endif // ex03

#ifdef ex05

int main()
{
  int N,soma,f,num; /* inteiro positivo dado (a ser lido) */


  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &N);
  f = fatorial(N);
  printf ("\nO fatorial de N é %d", f);







}

int fatorial(int n) {
    int fat = 1, digito, soma=0;
    for (int i = 1; i<=n; i++) {
        fat *= i;
    }


    while (fat > 0 )
    {
        digito = fat %10;
        soma = soma + digito;
        fat = (fat-digito)/10;
    }
    printf ("a soma dos algarismos é %d", soma);


}



#endif // ex05
