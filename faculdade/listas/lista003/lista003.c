#define ex03

#ifdef ex01


/*
1 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main().*/

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

/*
2 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch). As operacoes
    aritmeticas devem estar em funcoes. O resultado deve ser mostrado na
    funcao main()*/

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
/*3 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return). O vetor deve ser uma variavel global.

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y */

int v[] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};
int pesquisa(char letra){

int res = 0;
int i;
for( i = 0 ; i < 12 ; i++){

if (letra == v[i]){
    res=res+1;

}}


    return res;
}


int main(){
int res;
char c;

printf("Informe uma letra: ");
scanf("%c", &c);
res = pesquisa(c);
printf("O retorno da funcao foi: %d\n" , res);
if (res != 1){
    printf("A letra nao foi encontrada na pesquisa.\n");
    return 0;
} else {
    printf("A letra foi encontrada na pesquisa!\n");
    return 0;
}}










#endif // ex03


#ifdef ex04

/*4 - Faca um programa receba dois numeros inteiros e execute as seguintes fun��es:
    - Verificar se o n�mero digitado e positivo ou negativo. Sendo que o valor de
      retorno sera 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 numeros sao positivos, retorne a soma dos N numeros existentes entre
      eles.
    - Se os 2 numeros sao negativos, retorne a multiplicao dos N numeros existente
      entre eles. */

verif(int num){

if (num == 0){
    return -1;

} else {
    if (num < 0){
        return 0;
    } else {
    return 1;
    }
}

}

numero(int res){
if ( res == -1 ){
    printf("Numero informado igual a 0.\n");
    }

  else {
if ( res == 0) {
      printf("Numero informado negativo.\n");
    }

  else {
if ( res == 1 ){
    printf("Numero informado positivo.\n");
    }}

}
}

somaN(int a, int b){
int total, i, c;
total = 1;
if ( b > a ){
                for ( i = a+1 ; i < b; i++ ){
                total+=i;
                }

}

if ( a > b) {
c = a;
a = b;
b = c;

for ( i = a+1 ; i < b; i++ ){
                total+=i;
                }

}

return total;
}

multN(int a, int b){
a = a*(-1);
b = b*(-1);
int total, i, c, s;
total = 1;
s = 1;

if ( b > a ){
                for ( i = a+1 ; i < b; i++, s++ ){
                total = total * i;
                }

}

if ( a > b) {
c = a;
a = b;
b = c;

for ( i = a+1 ; i < b; i++, s++ ){
                total = total * i;
                }

}


if ( s%2 == 0){
    total = total*(-1);
}
return total;
}





main(){

int a,b, res1, res2, soma, mult;
printf("Informe dois numeros em sequencia: \n");
scanf("%d", &a);
res1 = verif(a);
numero(res1);
scanf("%d", &b);
res2 = verif(b);
numero(res2);
printf("\nSeus numeros sao: %d e %d\n", a, b);

if ( a > 0 && b > 0){
    printf("Ambos os numeros sao positivos!\n");
    soma = somaN(a,b);
    printf("A soma dos numeros entre eles e: %d\n\n", soma);
    printf("Fim do programa.\n\n");
    return 0;

} else {
    if ( a < 0 && b < 0){
    printf("Ambos os numeros sao negativos!\n");
    mult = multN(a,b);
    printf("A multiplicacao dos numeros entre eles e: %d\n\n", mult);
    printf("Fim do programa.\n\n");
} else
printf("Numeros sao de sinais diferentes.\n\n");
printf("Fim do programa.\n\n");
}





}

#endif // ex04

#ifdef ex05
/*5 - Escreva um programa que receba um numero N. Escreva uma fun��o que
    retorne a soma dos algarismos de N!. O resultado deve ser mostrado na funcao
    main().
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos �e 2 + 4 = 6.
*/
int main()
{
    int fat, n, soma;
    soma=0;

    printf("Informe um numero: ");
    scanf("%d",&n);

    for(fat = 1; n > 1; n = n - 1)
        {
           fat = fat * n;
        }

    printf("\nO resultado da fatoracao e: %d", fat);

    while(fat>0)
    {
        soma+=fat%10;
        fat/=10;
    }

    printf("\nA soma dos algarismos do numero fatorado e: %d\n",soma);

    return 0;
}


#endif // ex05
