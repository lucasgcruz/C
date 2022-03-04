
#define ex02

#ifdef ex01
/*
1 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
    comando if-else.
*/

main(){
int lmin, lmax, m;
char c;
lmin = 0;
lmax = 100;
m = 50;
printf("Neste programa adivinharei o numero que voce pensar.\n");
printf("Para isso preciso que informe se o numero que eu mostrar e maior (>), igual (=) ou menor (<) do que o que voce pensou.\n\n");
printf("O numero atual e %d.\n" , m);
printf("Seu numero e maior (>), igual (=) ou menor (<) que o atual?\n");
scanf(" %c" , &c);

    while ( c != '=') {
                if (c == '>') {
                lmin = m;
                m = (lmax+lmin)/2;
                printf("O numero atual e %d.\n" , m);
                }


                if (c == '<') {

                lmax = m;
                m = (lmax+lmin)/2;
                printf("O numero atual e %d.\n" , m);
                }

                printf("Seu numero e maior (>), igual (=) ou menor (<) que o atual?\n");
                scanf(" %c" , &c);

                }

printf("\nO numero que voce pensou e: %d\n" , m);
return 0;

                }
#endif

#ifdef ex02
/*
2 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.
*/

main(){
int lmin, lmax, m, tt;
char c;
lmin = 0;
lmax = 100;
m = 50;
tt = 0;
printf("Neste programa adivinharei o numero que voce pensar.\n");
printf("Para isso preciso que informe se o numero que eu mostrar e maior (>), igual (=) ou menor (<) do que o que voce pensou.\n\n");
printf("O numero atual e %d.\n" , m);
printf("Seu numero e maior (>), igual (=) ou menor (<) que o atual?\n");
scanf(" %c" , &c);

    while ( c != '=') {
    switch (c){

    case '>':
    lmin = m;
    m = (lmax+lmin)/2;
    printf("O numero atual e %d.\n" , m);
    tt++;
    printf("Seu numero e maior (>), igual (=) ou menor (<) que o atual?\n");
    scanf(" %c" , &c);
    break;

    case '<':
    lmax = m;
    m = (lmax+lmin)/2;
    printf("O numero atual e %d.\n" , m);
    tt++;
    printf("Seu numero e maior (>), igual (=) ou menor (<) que o atual?\n");
    scanf(" %c" , &c);
    break;

    }
    }

printf("\nO numero que voce pensou e: %d\n" , m);
printf("A quantidade de tentativas executadas foi: %d\n" , tt);
return 0;

                }
#endif

#ifdef ex03
/*
3 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados.
*/

main () {
int num, soma, cont;
num = 0;
soma = 0;
cont = 0;
float media;

printf("Neste programa voce informara numeros positivos para saber sua media.\n");
printf("Para encerrar a adicao de numeros basta informar um numero negativo.\n");

for ( cont = 0; num >= 0; cont++)
{
printf("Informe um numero: ");
scanf("%d", &num);
if (num >= 0) {
soma = soma + num;
}
else {
    cont--;
    continue;
}
}

media = soma / cont;
printf("A media dos numeros positivos informados e: %.2f .\n", media);
printf("Fim do programa.\n");



}

#endif

#ifdef ex04
/*
4 - As ligacoes telefonicas são cobradas pela sua duracao. O sistema registra os
    instantes em que a ligacao foi iniciada e concluida.
    Escreva um programa que recebe via teclado dois instantes dados em
    horas, minutos e segundo e determina o intervalo de tempo
    (em horas, minutos e segundos) decorrido entre eles.
*/

main() {
int h1, m1, s1, h2, m2, s2, h3, m3, s3, stotal, r;

printf("Neste programa calcularemos a duracao de uma chamada com base nos horarios de comeco e fim da mesma.\n");
printf("Para isso voce devera informar o horario em que a chamada comecou e terminou da seguinte forma: XX:XX:XX\n\n");
do {printf("Informe a hora em que a chamada comecou: ");
scanf("%d", &h1);
h1 = h1 * 3600;
printf("Informe o minuto em que a chamada comecou: ");
scanf("%d", &m1);
m1 = m1 * 60;
printf("Informe o segundo em que a chamada comecou: ");
scanf("%d", &s1);
s1 = s1 + m1 + h1;

printf("\nInforme a hora em que a chamada terminou: ");
scanf("%d", &h2);
h2 = h2 * 3600;
printf("Informe o minuto em que a chamada terminou: ");
scanf("%d", &m2);
m2 = m2 * 60;
printf("Informe o segundo em que a chamada terminou: ");
scanf("%d", &s2);
s2 = s2 + m2 + h2;
if (s1 > s2)
{
    printf("Horario de inicio maior que horario de fim.\n\n");
}
} while (s1 > s2);

stotal = s2 - s1;

h3 = stotal/3600;
r = stotal%3600;
m3 = r/60;
s3 = r%60;

printf("\nA sua chamada durou: %d h, %d m, %d s.", h3, m3, s3);
printf("\nFim do programa.");





}

#endif

#ifdef ex05
/*
5 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
     Álcool
         até 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          até 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o número de litros vendidos e o tipo de
     combustível (codificado da seguinte forma: A-álcool, G-gasolina). Calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
     gasolina é R$ 5,88 e o preço do litro do álcool é R$ 4,18.
*/

main () {

int litro, desconto;
float total;
char ch;

printf("Bem-vindo(a) ao nosso posto.\n");
printf("Gasolina: R$ 5,88 \nAlcool: R$ 4,18\n");
printf("O desconto sobre a gasolina e de 3%%, acima de 20 litros de gasolina o desconto e de 5%%. \nO desconto sobre o alcool e de 4%%, acima de 20 litros de alcool o desconto e de 6%%.\n\n");
printf("Para comprar gasolina digite 'G', para alcool digite 'A': ");
ch = getchar();


            if ( ch == 'G' || ch == 'g')
            {
            printf("Quantidade de litros: ");
            scanf("%d" , &litro);
            if (litro <= 0) {
            printf("Voce digitou uma quantidade invalida de litros.\n");
            printf("Fim do programa.\n");
            return 0;
            }
            total = litro * 5.88;

            if (litro > 20) {
            desconto = 5;
            printf("O total da sua compra e: R$ %.2f\n" , total - (total * desconto/100));
            }

            else {
            desconto = 3;
            printf("O total da sua compra e: R$ %.2f\n" , total - (total * desconto/100));
            }




            }

            if ( ch == 'A' || ch == 'a')
            {
            printf("Quantidade de litros: ");
            scanf("%d" , &litro);
            if (litro <= 0) {
            printf("Voce digitou uma quantidade invalida de litros.\n");
            printf("Fim do programa.\n");
            return 0;
            }
            total = litro * 4.18;

            if (litro > 20) {
            desconto = 6;
            printf("O total da sua compra e: R$ %.2f\n" , total - (total * desconto/100));
            }

            else {
            desconto = 4;
            printf("O total da sua compra e: R$ %.2f\n" , total - (total * desconto/100));
            }

            }




            if ( ch != 'G' && ch !='g' && ch !='A' && ch !='a')
            {
                printf("Voce digitou uma letra que nao equivale a nenhum tipo de combustivel.\n");
            }


printf("Fim do programa.\n");

}
#endif
