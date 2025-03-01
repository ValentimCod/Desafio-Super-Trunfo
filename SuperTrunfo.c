#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
    
    printf("Desafio Super Trunfo \n");
    printf("--------------------");
    printf("\n");
    printf("\n");

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado_letra ='A';
    char codigo_da_carta[5] ="A01";
    char nome_da_cidade[20] ="Sao_Paulo";
    int populacao = 12345678;
    float area_em_km = 12345.11;
    float pib = 123.23;
    int pontos_turisticos = 50;

// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira as Informações de cada cidade logo a baixo, para cadastrarmos nossas cartas.\n\n");

// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Cadastro das Cartas:

    printf("Carta 1\n");
    printf("Escolha uma letra maiuscula de A à H para representar seu Estado:\n");
    scanf(/*espaço*/"%c", &estado_letra);
    //printf( "Estado:%c\n", estado_letra);

    printf("Digite a Letra do Estado seguida de um número de 01 a 04:(Ex:A01,A02...)\n");
    scanf("%s" , codigo_da_carta);
    //printf("Código: %s", codigo_da_carta);

    printf("Digite o nome de uma cidade:\n");
    scanf("%s", nome_da_cidade);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d",&populacao);

    printf("Digite a área da cidade em quilômentros quadrados:\n");
    scanf("%f", &area_em_km);

    printf("Digite o produto interno da cidade:(PIB)\n");
    scanf("%f", &pib);

    printf("Digite o quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);


// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.
  printf("\n\n");
  
  printf("Carta 1\n");
  printf("Estado:%c\n", estado_letra);
  printf("Código:%s\n", codigo_da_carta);
  printf("Nome da Cidade:%s\n", nome_da_cidade );
  printf("População:%d\n", populacao);
  printf("Área em Km:%f\n", area_em_km);
  printf("PIB:%f\n", pib);
  printf("Número de pontos turísticos:%d\n", pontos_turisticos);

  printf("\n");

  
    return 0;
}