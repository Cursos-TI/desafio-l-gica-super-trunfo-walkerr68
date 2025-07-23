#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 
int carta = 1;
char estado[50] = "A";
char codigo[50] = "A01";
char nome[50] = "Brasil";
int populacao = 211.1;
float area =  8510001;
float pib = 2.174;
int pontosturisticos = 50;

int carta2 = 2;
char estado2[50] = "B";
char codigo2[50] = "B02";
char nome2[50] = "Alemanha";
int populacao2 = 83.28;
float area2 = 357592;
float pib2=  4.526;
int pontosturisticos2 = 80;

float PIBPER1 = 10294;
float DENSIPOP1 = 23.86;
float PIBPER2 = 54343;
float DENSIPOP2 = 233;


int opcao;

printf("Jogo Super Trunfo\n");
printf("1. Regras \n");
printf("2. Sair\n");
printf("Escolha o Atributo para a Comparação das Cartas  \n");
printf("Brasil x Alemanha\n");
printf("Escolha uma opcão:\n");
printf("3. População\n");
printf("4. Área\n");
printf("5. PIB\n");
printf("6. Pontos Turísticos\n");
printf("7. Densidade Demográfica\n");

scanf("%d", &opcao);

switch (opcao){


    case 1: 
    printf("Regras do Jogo: \n");
    printf("1. Ganha Quem Tiver O Maior Atributo. \n");
    printf("2. Atributos Iguais é Empate\n");
    printf("3. Na densidade, Vence o menor valor...\n ");

     
    break;
    case 2:
     printf("Saindo ...\n");
     break;
    case 3: 
    printf(" População\n");
    if(populacao > populacao2){
        printf("Brasil Ganhou!\n");
    } else if (populacao < populacao2){
             printf("Alemanha Ganhou!\n");
    } else{
          printf("Houve um empate\n");
          }
    break;
    case 4 :
     printf(" Área\n");
    if(area > area2){
        printf("Brasil Ganhou!\n");
    } else if (area < area2){
             printf("Alemanha Ganhou!\n");
    } else{
          printf("Houve um empate\n");
          }
    break;
    case 5 :
    printf(" PIB\n");
    if(pib > pib2){
        printf("Brasil Ganhou!\n");
    } else if (area < area2){
             printf("Alemanha Ganhou!\n");
    } else{
          printf("Houve um empate\n");
          }
    break;
    case 6:
    printf(" Pontos Turísticos\n");
    if(pontosturisticos > pontosturisticos2){
        printf("Brasil Ganhou!\n");
    } else if (pontosturisticos < pontosturisticos2){
             printf("Alemanha Ganhou!\n");
    } else{
          printf("Houve um empate\n");
          }
    break;
    case 7:
    printf(" Densidade Demográfica\n");
    if(DENSIPOP1 < DENSIPOP2){
        printf("Brasil Ganhou!\n");
    } else if (DENSIPOP1 > DENSIPOP2){
             printf("Alemanha Ganhou!\n");
    } else{
          printf("Houve um empate\n");
          }
    break;

    default :
    printf("Opção Inválida. Tente novamente. \n");

}
return 0;
}