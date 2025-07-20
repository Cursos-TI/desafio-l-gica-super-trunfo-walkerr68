#include <stdio.h>

int main(){

int carta = 1;
char estado[50] = "A";
char codigo[50] = "A01";
char nome[50] = "Brasil";
int populacao =  211100000;
float area = 8510001;
float pib = 2174000000000;
int pontosturisticos = 50;

int carta2 = 2;
char estado2[50] = "B";
char codigo2[50] = "B02";
char nome2[50] = "Alemanha";
int populacao2 =  83000000;
float area2 = 357592;
float pib2= 4526000000000 ;
int pontosturisticos2 = 80;

float PIBPER1 = 56736.71;
float DENSIPOP1 = 8102.64;
float PIBPER2 = 5622.16;
float DENSIPOP2 = 44531.71;

float quociente = populacao / area;
float quociente2 = pib / populacao;
float quociente3 = pib2 / populacao2;
float divisao = populacao2 / area2;
float superpoder = populacao + area + pib + pontosturisticos + PIBPER1 + DENSIPOP1;
float superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + PIBPER2 + DENSIPOP2;


printf("*Carta: %d\n",carta);
printf("Estado: %s\n", estado);
printf("Código: %s\n",codigo);
printf("Nome da Cidade: %s\n", nome);
printf("População: %d Milhões\n",populacao);
printf("Área: %.2f km²\n",area);
printf("PIB: %.2f Trilhões\n",pib);
printf("Pontos Turisticos: %d\n",pontosturisticos);

printf("A Densidade Proporcional é: %.2fHab/km²\n", quociente);
printf("PIB Per Capita é: %.2fReais\n",quociente2);

printf("Super Poder: %f\n\n", superpoder  );

printf("**Carta: %d\n",carta2);
printf("Estado: %s\n", estado2);
printf("Código: %s\n",codigo2);
printf("Nome da Cidade: %s\n", nome2);
printf("População: %d Milhões\n",populacao2);
printf("Área: %.2f km²\n",area2);
printf("PIB: %.1f Trilhões\n",pib2);
printf("Pontos Turisticos: %d\n",pontosturisticos2);

printf("A Densidade Proporcional é: %.2fHab/km²\n", divisao);
printf("PIB Per Capita é: %.2f Reais\n",quociente3);

printf("Super Poder: %f\n\n", superpoder2 );

printf("Comparação das Cartas\n");

printf("População :\n");
if (populacao > populacao2){
    printf("Brasil Venceu!\n");
}else{
    printf("Alemanha Venceu!\n");
}

printf("Area :\n");
if (area > area2){
    printf("Brasil Venceu!\n");
}else{
    printf("Alemanha Venceu!\n");
}

printf("PIB :\n");
if (pib > pib2){
    printf("Brasil Venceu!\n");
}else{
    printf("Alemanha Venceu!\n");
}

printf("Pontos Turísticos :\n");
if (pontosturisticos > pontosturisticos2){
    printf("Brasil Venceu!\n");
}else{
    printf("Alemanha Venceu!\n");
}


return 0;

}