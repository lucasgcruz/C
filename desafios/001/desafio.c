#include <stdio.h>

char nome_musica1[20];
char nome_musica2[20];
char nome_musica3[20];
char nome_autor1[20];
char nome_autor2[20];
char nome_autor3[20];

FILE *file;

void main(){

int opc;

printf("Programa de biblioteca de musica.\n");

do {
printf("\nMENU\n\n");
printf("1 - Entrada de Dados\n2 - Listar Dados na Tela\n3 - Pesquisar Musica\n4 - Pesquisar Autor por Letra\n5 - Alterar Dados\n6 - Excluir Dados\n7 - Sair\n\n");
printf("Opcao: ");
scanf(" %s" , &opc);

    switch (opc)
    {
    case '1':
    entradaDados();
        break;

    case '2':
    listaDados();
        break;  

    case '3':
    pesquisaMusica();
        break;  

    case '4':
    pesquisaAutor();
        break;    

    case '5':
    alteraDados();
        break;

    case '6':
    excluiDados();
        break;

    case '7':
    printf("\nSaindo do programa...");
    exit(0);     

    default:
        break;

}} while (opc != 7);

}

entradaDados(){
printf("\nEntrada de Dados\n\n");
printf("Musica 1: ");
scanf("%s" , &nome_musica1);
printf("Autor 1: ");
scanf("%s" , &nome_autor1);
printf("Musica 2: ");
scanf("%s" , &nome_musica2);
printf("Autor 2: ");
scanf("%s" , &nome_autor2);
printf("Musica 3: ");
scanf("%s" , &nome_musica3);
printf("Autor 3: ");
scanf("%s" , &nome_autor3);

file = fopen ("musica.txt", "w");
fwrite(&nome_musica1, sizeof(nome_musica1),1,file);
fwrite(&nome_autor1, sizeof(nome_autor1),1,file);
fwrite(&nome_musica2, sizeof(nome_musica2),1,file);
fwrite(&nome_autor2, sizeof(nome_autor2),1,file);
fwrite(&nome_musica3, sizeof(nome_musica3),1,file);
fwrite(&nome_autor3, sizeof(nome_autor3),1,file);
fclose (file);
}

listaDados(){
printf("\nListagem de Dados\n\n");
file = fopen ("musica.txt", "r");
fread (&nome_musica1, sizeof (nome_musica1) ,1,file);
printf("Musica 1 - %s ", nome_musica1);
fread (&nome_autor1, sizeof (nome_autor1) ,1,file);
printf("Autor 1 - %s\n", nome_autor1);
fread (&nome_musica2, sizeof (nome_musica2) ,1,file);
printf("Musica 2 - %s ", nome_musica2);
fread (&nome_autor2, sizeof (nome_autor2) ,1,file);
printf("Autor 2 - %s\n", nome_autor2);
fread (&nome_musica3, sizeof (nome_musica3) ,1,file);
printf("Musica 3 - %s ", nome_musica3);
fread (&nome_autor3, sizeof (nome_autor3) ,1,file);
printf("Autor 3 - %s\n", nome_autor3);
fclose(file);
}



pesquisaMusica(){
char pesquisa[20];
printf("\nPesquisa de Musica\n");
printf("Nome completo da musica: ");
scanf("%s" , &pesquisa);
int x;
int vf=0; // inicia como não localizada

// verificador musica1
x=0; // reset loop
while (pesquisa[x] == nome_musica1[x] && pesquisa[x] != '\0' && nome_musica1[x] != '\0')
{
    ++x;
}
if (pesquisa[x] == '\0' &&  nome_musica1[x] == '\0'){
    printf("\nMusica encontrada na posicao 1.\n");
    vf=1; //caso seja localizada o valor é alterado
} 

// verificador musica2
x=0; // reset loop
while (pesquisa[x] == nome_musica2[x] && pesquisa[x] != '\0' && nome_musica2[x] != '\0')
{
    ++x;
}
if (pesquisa[x] == '\0' &&  nome_musica2[x] == '\0'){
    printf("\nMusica encontrada na posicao 2.\n");
    vf=1;
} 

// verificador musica3
x=0; // reset loop
while (pesquisa[x] == nome_musica3[x] && pesquisa[x] != '\0' && nome_musica3[x] != '\0')
{
    ++x;
}
if (pesquisa[x] == '\0' &&  nome_musica3[x] == '\0'){
    printf("\nMusica encontrada na posicao 3.\n");
    vf=1;
} 

if (vf==0){printf("\nMusica nao encontrada.\n");} // caso o valor não se altere não foi encontrada.

}

pesquisaAutor(){
printf("\nPesquisa de Autor\n");
char p;
printf("\nInforme a primeira letra do autor: ");
scanf("%s" , &p);
int vf=0; // inicia como não localizada

if (p == nome_autor1[0]){
printf("\nAutor encontrado na posicao 1: %s\n" , nome_autor1);
vf=1; // caso localizada o valor se altera
}

if (p == nome_autor2[0]){
printf("\nAutor encontrado na posicao 2: %s\n" , nome_autor2);
vf=1; 
}

if (p == nome_autor3[0]){
printf("\nAutor encontrado na posicao 3: %s\n" , nome_autor3);
vf=1; 
}

if (vf==0){printf("\nAutor nao encontrado.\n");} // caso o valor não se altere não foi encontrado.

}

alteraDados(){
char p[20];
printf("\nAlteracao de Dados\n");
printf("Nome completo da musica: ");
scanf("%s" , &p);

int x; // variavel para verificação de caracteres
int vf=0; // inicia como não localizada

// verificador primeira musica
x=0; // reset loop
while (p[x] == nome_musica1[x] && p[x] != '\0' && nome_musica1[x] != '\0')
{
    ++x;
}

if (p[x] == '\0' &&  nome_musica1[x] == '\0'){
    printf ("\nMusica encontrada na posicao 1.\n");
    printf("Novo nome: ");
    scanf("%s",&nome_musica1);
    printf("Novo autor: ");
    scanf("%s",&nome_autor1);
    vf=1; // caso localizada o valor se altera
}

// verificador segunda musica
x=0; // reset loop
while (p[x] == nome_musica2[x] && p[x] != '\0' && nome_musica2[x] != '\0')
{
    ++x;
}

if (p[x] == '\0' &&  nome_musica2[x] == '\0'){
    printf ("\nMusica encontrada na posicao 2.\n");
    printf("Novo nome: ");
    scanf("%s",&nome_musica2);
    printf("Novo autor: ");
    scanf("%s",&nome_autor2);
    vf=1; // caso localizada o valor se altera
}

// verificador terceira musica
x=0; // reset loop
while (p[x] == nome_musica3[x] && p[x] != '\0' && nome_musica3[x] != '\0')
{
    ++x;
}

if (p[x] == '\0' &&  nome_musica3[x] == '\0'){
    printf ("\nMusica encontrada na posicao 3.\n");
    printf("Novo nome: ");
    scanf("%s",&nome_musica3);
    printf("Novo autor: ");
    scanf("%s",&nome_autor3);
    vf=1; // caso localizada o valor se altera
}

if (vf==0){printf("\nMusica não encontrada.\n");} // caso o valor não se altere não foi encontrada.

// registro de dados no arquivo
file = fopen ("musica.txt", "w");
fwrite(&nome_musica1, sizeof(nome_musica1),1,file);
fwrite(&nome_autor1, sizeof(nome_autor1),1,file);
fwrite(&nome_musica2, sizeof(nome_musica2),1,file);
fwrite(&nome_autor2, sizeof(nome_autor2),1,file);
fwrite(&nome_musica3, sizeof(nome_musica3),1,file);
fwrite(&nome_autor3, sizeof(nome_autor3),1,file);
fclose (file);

}

excluiDados(){
printf("\nExclusao de Dados\n");
char p[20];
printf("Nome completo da musica: ");
scanf("%s" , &p);

int x; // variavel para verificação de caracteres
int z; // variavel para exclusão de caracteres
int vf=0; // inicia como nao localizada

// verificador primeira musica
x=0; // reset loop
z=0; // reset loop
while (p[x] == nome_musica1[x] && p[x] != '\0' && nome_musica1[x] != '\0')
{
    ++x;
}

if (p[x] == '\0' &&  nome_musica1[x] == '\0'){
    printf ("\nMusica encontrada na posicao 1.\n");

    while (nome_musica1[z] != '\0'){ // exclusao caracteres posicao 1
        nome_musica1[z] =' ';
        ++z;
    }

    z=0; // reset loop

    while (nome_autor1[z] != '\0'){ // exclusao caracteres posicao 1
        nome_autor1[z] =' ';
        ++z;
    }

    printf ("\nMusica excluida com sucesso!\n");

    vf=1;

}

// verificador segunda musica
x=0; // reset loop
z=0; // reset loop
while (p[x] == nome_musica2[x] && p[x] != '\0' && nome_musica2[x] != '\0')
{
    ++x;
}

if (p[x] == '\0' &&  nome_musica2[x] == '\0'){
    printf ("\nMusica encontrada na posicao 2.\n");

    while (nome_musica2[z] != '\0'){ // exclusao caracteres posicao 2
        nome_musica2[z] =' ';
        ++z;
    }

    z=0; // reset loop

    while (nome_autor2[z] != '\0'){ // exclusao caracteres posicao 2
        nome_autor2[z] =' ';
        ++z;
    }

    printf ("\nMusica excluida com sucesso!\n");

    vf=1;

}

// verificador terceira musica
x=0; // reset loop
z=0; // reset loop
while (p[x] == nome_musica3[x] && p[x] != '\0' && nome_musica3[x] != '\0')
{
    ++x;
}

if (p[x] == '\0' &&  nome_musica3[x] == '\0'){
    printf ("\nMusica encontrada na posicao 3.\n");

    while (nome_musica3[z] != '\0'){ // exclusao caracteres posicao 3
        nome_musica3[z] =' ';
        ++z;
    }

    z=0; // reset loop

    while (nome_autor3[z] != '\0'){ // exclusao caracteres posicao 3
        nome_autor3[z] =' ';
        ++z;
    }

    printf ("\nMusica excluida com sucesso!\n");

    vf=1;

}

if (vf==0){printf("\nMusica não encontrada.\n");} // caso o valor não se altere não foi encontrada.

// registro de dados no arquivo
file = fopen ("musica.txt", "w");
fwrite(&nome_musica1, sizeof(nome_musica1),1,file);
fwrite(&nome_autor1, sizeof(nome_autor1),1,file);
fwrite(&nome_musica2, sizeof(nome_musica2),1,file);
fwrite(&nome_autor2, sizeof(nome_autor2),1,file);
fwrite(&nome_musica3, sizeof(nome_musica3),1,file);
fwrite(&nome_autor3, sizeof(nome_autor3),1,file);
fclose (file);

}