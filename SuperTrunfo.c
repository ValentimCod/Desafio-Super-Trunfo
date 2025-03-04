#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
    
// Sugestão: Defina variáveis separadas para cada atributo da cidade."E declare todas".
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1 = 'A', estado2 ='B';
    char codigo_da_carta1[20], codigo_da_carta2[20] ="A01";
    char nome_da_cidade1[40], nome_da_cidade2[40] ="Sao_Paulo";
    int populacao1 = 1223334, populacao2 = 12345678;
    float area_em_km1 = 2312333, area_em_km2 = 1234511;
    float pib1 = 2323123, pib2 = 123.23;
    int pontos_turisticos1 = 50, pontos_turisticos2 = 50;

    printf("Desafio Super Trunfo Cidades\n");

    printf("-----------------------------");
    printf("\n\n");

// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Cadastro das Cartas:

    printf("Insira as Informações de cada cidade logo a baixo, para cadastrarmos suas cartas:\n\n");
    printf("Carta 1\n");
    printf("Escolha uma letra maiúscula de A à H para representar seu Estado:\n");
    scanf("%c", &estado1);//Nesse %c, não precisa de ESPAÇO, pois não tem nenhum scanf de %d ou %s antes dele, logo não há nada no buffer!

    printf("Digite a Letra do Estado seguida de um número de 01 a 04:(Ex:A01,A02...)\n");
    scanf("%s" ,codigo_da_carta1); 

    printf("Digite o nome de uma cidade:\n");
    scanf("%s", nome_da_cidade1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d",&populacao1);

    printf("Digite a área da cidade em quilômentros quadrados:\n");
    scanf("%f", &area_em_km1);

    printf("Digite o produto interno da cidade:(PIB)\n");
    scanf("%f", &pib1);

    printf("Digite o quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);

    printf("----------------------------\n");

    printf("Carta 2\n");
    printf("Escolha uma letra maiúscula de A à H para representar seu Estado:\n");
    scanf(" %c", &estado2);//scanf(" %c", &letra); // O espaço ignora espaços em branco e ENTERs pendentes
    /*Se antes de scanf("%c", &variavel); você usou um scanf 
    para ler um número (%d) ou uma string (%s), o ENTER (\n) 
    que o usuário digitou pode ficar preso no buffer e ser consumido pelo %c.Para corrigir use um espaço antes de %c no scanf:*/

    printf("Digite a Letra do Estado seguida de um número de 01 a 04:(Ex:A01,A02...)\n");
    scanf("%s" , codigo_da_carta2);
    
    printf("Digite o nome de uma cidade:\n");
    scanf("%s", nome_da_cidade2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d",&populacao2);

    printf("Digite a área da cidade em quilômentros quadrados:\n");
    scanf("%f", &area_em_km2);

    printf("Digite o produto interno da cidade:(PIB)\n");
    scanf("%f", &pib2);

    printf("Digite o quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

  printf("------------------------------\n");
  
  printf("Carta 1\n");
  printf("Estado:%c\n", estado1);
  printf("Código:%s\n", codigo_da_carta1);
  printf("Nome da Cidade:%s\n", nome_da_cidade1 );
  printf("População:%d\n", populacao1);
  printf("Área em Km:%f\n", area_em_km1);
  printf("PIB:%f\n", pib1);
  printf("Número de pontos turísticos:%d\n", pontos_turisticos1);

  printf("------------------------------\n");

  printf ("Carta 2\n");
  printf("Estado:%c\n", estado2);
  printf("Código:%s\n", codigo_da_carta2);
  printf("Nome da Cidade:%s\n", nome_da_cidade2);
  printf("População:%d\n", populacao2);
  printf("Área em Km:%f\n", area_em_km2);
  printf("PIB:%f\n", pib1);
  printf("Número de pontos turísticos:%d\n", pontos_turisticos2);

  printf("------------------------------\n");
  

  
    return 0;
}