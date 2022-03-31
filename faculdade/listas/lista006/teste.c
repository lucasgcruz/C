/* 3 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
    data (dia, mes e ano) atual. */

int diaNasc = 0, mesNasc = 0, anoNasc = 0, diaHoje = 0, mesHoje = 0, anoHoje = 0;
int diaTotal;

main(){


  do
    {
    printf("Informe o dia de nascimento: ");
    scanf("%d", &diaNasc);
    if (diaNasc>31 || diaNasc<1)
    printf("Dia invalido!\n");
    }
    while (diaNasc>31 || diaNasc<1);

  do
    {
    printf("Informe o mes de nascimento: ");
    scanf("%d", &mesNasc);
    if (mesNasc>12 || mesNasc<1)
    printf("Mes invalido!\n");
    }
    while (mesNasc>12 || mesNasc<1);

printf("Informe o ano de nascimento: ");
scanf("%d", &anoNasc);

printf("Data de Nascimento: %2d/%2d/%4d", diaNasc,mesNasc,anoNasc);

  do
    {
    printf("\n\nInforme o dia de atual: ");
    scanf("%d", &diaHoje);
    if (diaHoje>31 || diaHoje<1)
    printf("Dia invalido!\n");
    }
    while (diaHoje>31 || diaHoje<1);

  do
    {
    printf("Informe o mes de atual: ");
    scanf("%d", &mesHoje);
    if (mesHoje>12 || mesHoje<1)
    printf("Mes invalido!\n");
    }
    while (mesHoje>12 || mesHoje<1);

      do
    {
 
    printf("Informe o ano atual: ");
    scanf("%d" , &anoHoje);
    if (anoHoje<anoNasc)
    printf("\nAno atual menor que ano de nascimento!\n");
    }
    while (anoHoje<anoNasc);

printf("Data atual: %2d/%2d/%4d\n\n", diaHoje,mesHoje,anoHoje);

diaTotal=(diaHoje+(mesHoje*30)+(anoHoje*365))-(diaNasc+(mesNasc*30)+(anoNasc*365));
printf("Dias vividos = %d" , diaTotal);
}