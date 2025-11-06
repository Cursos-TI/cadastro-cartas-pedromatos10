#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Foram criadas 2 variáveis de cada dado, para que um não sobreponha o outro

    char estado1, codigo1[3], nome1[20], estado2, codigo2[3], nome2[20];
    int populacao1, pturisticos1, populacao2, pturisticos2;
    float area1, PIB1, area2, PIB2;

  // Área para entrada de dados
  printf("Insira os dados da Carta 1\n");

    printf("Insira o ESTADO da carta 1: ");
    scanf(" %c", &estado1);

    printf("Insira o CÓDIGO da Carta 1: ");
    scanf(" %s", codigo1);
    
    printf("Insira o NOME da Cidade: ");
    scanf(" %s", nome1);

    printf("Insira a POPULAÇÃO da Cidade: ");
    scanf(" %d", &populacao1);

    printf("Insira a ÁREA da Cidade (Em Km²): ");
    scanf(" %f", &area1);

    printf("Insira o PIB da Cidade (Em Bilhões de reais): ");
    scanf(" %f", &PIB1);

    printf("Insira a quantidade de PONTOS TURÍSTICOS da Cidade: ");
    scanf(" %d", &pturisticos1);

printf("\nInsira os dados da Carta 2\n");

    printf("Insira o ESTADO da carta 2: ");
    scanf(" %c", &estado2);

    printf("Insira o CÓDIGO da Carta 2: ");
    scanf(" %s", codigo2);
    
    printf("Insira o NOME da Cidade: ");
    scanf(" %s", nome2);

    printf("Insira a POPULAÇÃO da Cidade: ");
    scanf(" %d", &populacao2);

    printf("Insira a ÁREA da Cidade (Em Km²): ");
    scanf(" %f", &area2);

    printf("Insira o PIB da Cidade (Em Bilhões de reais): ");
    scanf(" %f", &PIB2);

    printf("Insira a quantidade de PONTOS TURÍSTICOS da Cidade: ");
    scanf(" %d", &pturisticos2);

  // Área para exibição dos dados da cidade
  // Separação com \n e caracteres para melhor visualização da separação de cada carta
printf("\n-------- Carta 1 --------\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pturisticos1);

printf("\n-------- Carta 2 --------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f Km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pturisticos2);

return 0;
} 
