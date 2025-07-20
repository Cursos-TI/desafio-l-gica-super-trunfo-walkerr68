#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {  
    int resultado1, resultado2;
    int soma , soma2;
    char primeiroAtributo, segundoAtributo;
    int  Area1, Area2,pontosturisticos1,pontosturisticos2;
    float PIB1, PIB2,População1, População2,densidade1,densidade2;
    // Gerar número aleatório
    srand(time(0));
   PIB1 = 2.174 ; //rand() % 100 + 1; //Número entre 1 e 100
   PIB2 = 4.526 ; //rand() % 100 + 1; //Número entre 1 e 100
   População1 = 211.1 ; //rand() % 100 + 1; //Número entre 1 e 100
   População2 = 83.28; //rand() % 100 + 1; //Número entre 1 e 100
   Area1 = 8510001; //rand() % 100 + 1; //Número entre 1 e 100
   Area2 = 357592; //rand() % 100 + 1; //Número entre 1 e 100
   pontosturisticos1 = 50; //rand() % 100 + 1; //Número entre 1 e 100
   pontosturisticos2 = 80; //rand() % 100 + 1; //Número entre 1 e 100
   densidade1 = 23.86; //rand() % 100 + 1; //Número entre 1 e 100
   densidade2 = 233; //rand() % 100 + 1; //Número entre 1 e 100
   soma = PIB1 + Area1 + pontosturisticos1 + População1 + densidade1;
   soma2 = PIB2 + Area2 + pontosturisticos2 + População2 + densidade2;
    
   // Exibir valores (opcional, para debug)
    printf("\nBrasil: PIB=%.3f, População=%.2f, Área =%d, Pontos Turísticos = %d, Densidade Demográfica = %.2f\n", PIB1, População1, Area1, pontosturisticos1,densidade1);
    printf("Alemanha: PIB=%.3f, População=%.2f, Área=%d, Pontos Turísticos = %d, Densidade Demográfica = %.2f\n\n",PIB2, População2, Area2, pontosturisticos2,densidade2);

    // Início do jogo
    printf("Bem-vindo ao Jogo!\n");
    printf("Escolha o primeiro atributo.\n");
    printf("A.PIB '\nB. População\nC. Área\nD.Pontos Turísticos\nE. Densidade Demográfica\n");
    printf("Escolha a comparação: ");
    scanf(" %c", &primeiroAtributo); 

    switch (primeiroAtributo) {
        case 'A':
        case 'a':
            printf("Você escolheu a opção PIB!\n");
            resultado1 = PIB1 > PIB2 ? 1 : 0;
            break;
        case 'B':
        case 'b':
            printf("Você escolheu a opção População!\n");
            resultado1 = População1 > População2 ? 1 : 0;
            break;
        case 'C':
        case 'c':
            printf("Você escolheu a opção Área!\n");
            resultado1 = Area1 > Area2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu a opção Pontos Tutísticos!\n");
            resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            break;
        case 'E':
        case 'e':
            printf("Você escolheu a opção Pontos Densidade Demografica!\n");
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;
        default:
            printf("Opção de jogo inválida.\n");
            return 1;  // Encerra o programa
    }

    printf("\nEscolha o segundo atributo (diferente do primeiro).\n");
    printf("A. PIB\nB. População \nC. Área\nD. Pontos Turísticos\nE. Densidade Demográfica\n");
    printf("Escolha a comparação: ");
    scanf(" %c", &segundoAtributo);  // Note o espaço antes de %c

    if (primeiroAtributo == segundoAtributo) {
        printf("Você escolheu o mesmo atributo duas vezes. Fim de jogo.\n");
        return 1;
    }

    switch (segundoAtributo) { 
        case 'A':
        case 'a':
            printf("Você escolheu a opção PIB!\n");
            resultado2 = PIB1 > PIB2 ? 1 : 0;
            break;
        case 'B':
        case 'b':
            printf("Você escolheu a opção POPULAÇÃO!\n");
            resultado2 = População1 > População2 ? 1 : 0;
            break;
        case 'C':
        case 'c':
            printf("Você escolheu a opção Área!\n");
            resultado2 = Area1 > Area2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu a opção Pontos Tutísticos!\n");
            resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            break;
        case 'E':
        case 'e':
            printf("Você escolheu a opção Pontos Densidade Demografica!\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
        default:
            printf("Opção de jogo inválida.\n");
            return 1;
    }

    // Verificar resultado final
    printf("\nResultado por comparação de atributos:\n");
        if (resultado1 && resultado2) {
        printf("\nBrasil venceu !\n\n");
    } else if (resultado1 || resultado2) {
        printf("\n--Empate--.\n\n");
    } else {
        printf("\nAlemanha ganhou !\n\n");
    }
     
    printf("Resultado pela soma dos atributos:\n");
    if (soma > soma2){
        printf("\nBrasil venceu!\n ");
    }else if(soma = soma2){ 
       printf("empate!\n");
    } else{
        printf("\nAlemanha ganhou !\n\n");
    }

    return 0;
}
