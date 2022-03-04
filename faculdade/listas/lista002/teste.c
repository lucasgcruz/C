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
            printf("Parabens, voce digitou uma quantidade invalida de litros, voce tem o qi de uma porta.\n");
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
            printf("Parabens, voce digitou uma quantidade invalida de litros, voce tem o qi de uma porta.\n");
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
                printf("Voce provavelmente nao sabe ler, se for o caso procure um oculista, se nao for o caso procure um psicologo.\n");
            }


printf("Fim do programa.\n");

}
