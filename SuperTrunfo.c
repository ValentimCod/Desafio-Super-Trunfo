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

// Modificando int populacao e seus especificadores de formato %d, para unsigned long int %lu, para aumentar o armazenamento de números positivos.  
    unsigned long int populacao1 = 2279686, populacao2 = 11451999;

    float area_em_km1 = 11401092, area_em_km2 = 1521202;
    float pib1 = 103281, pib2 =  828980607731;
    int pontos_turisticos1 = 50, pontos_turisticos2 = 50;
// Adicionando mais duas variáveis para caucular a Densidade Populacional e calcular o PIB per Capita.
    float densidadepopulacao1 = 123131, densidadepopulacao2 = 23123;
    float pibCapita1 = 313123, pibCapita2 = 12323;

// Adicionando mais duas variáveis para calcular o inverso da densiade populacional
/*Por que fazer isso? 
O inverso da densidade populacional pode ser usado para representar, 
de maneira intuitiva, a quantidade de espaço disponível por pessoa. 
Se a densidade é alta, o inverso será baixo, indicando menos espaço por pessoa*/
    float InversoDensidade1, InversoDensidade2;

// Adicionando mais duas variável para caulcular o super poder das duas cartas
    float SuperPoder1, SuperPoder2;

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
printf("\n");

    printf("Digite a Letra do Estado seguida de um número de 01 a 04:(Ex:A01,A02...)\n");
    scanf("%s",codigo_da_carta1); 
printf("\n");

    printf("Digite o nome de uma cidade:\n");
    scanf("%s", nome_da_cidade1);
printf("\n");

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%lu",&populacao1);
printf("\n");

    printf("Digite a área da cidade em quilômentros quadrados:\n");
    scanf("%f", &area_em_km1);
printf("\n");

    printf("Digite o produto interno da cidade:(PIB)\n");
    scanf("%f", &pib1);
printf("\n");

    printf("Digite o quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);


    printf("----------------------------\n");

    printf("Carta 2\n");
    printf("Escolha uma letra maiúscula de A à H para representar seu Estado:\n");
    scanf(" %c", &estado2);//scanf(" %c", &estado2); // O espaço ignora espaços em branco e ENTERs pendentes
    /*Se antes de scanf("%c", &variavel); você usou um scanf 
    para ler um número (%d) ou uma string (%s), o ENTER (\n) 
    que o usuário digitou pode ficar preso no buffer e ser consumido pelo %c.Para corrigir use um espaço antes de %c no scanf:*/

    printf("Digite a Letra do Estado seguida de um número de 01 a 04:(Ex:A01,A02...)\n");
    scanf("%s", codigo_da_carta2);
printf("\n");

    printf("Digite o nome de uma cidade:\n");
    scanf("%s", nome_da_cidade2);
printf("\n");

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%lu", &populacao2);
printf("\n");

    printf("Digite a área da cidade em quilômentros quadrados:\n");
    scanf("%f", &area_em_km2);
printf("\n");

    printf("Digite o produto interno da cidade:(PIB)\n");
    scanf("%f", &pib2);
printf("\n");

    printf("Digite o quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("------------------------------\n");
  
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1 );
    printf("População :%lu\n", populacao1);
    printf("Área em Km: %.2f\n", area_em_km1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

//Calculando a densidade Populacional e PIB per Capita e adicinando com as informações da carta 1!
//variável int populacao1 é convertida para float antes da divisão, garantindo um resultado de ponto flutuante.
    densidadepopulacao1 = (float) populacao1 / area_em_km1 ;
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacao1);

    pibCapita1 = (float) pib1/populacao1;
    printf("PIB per Capita: %.2f reais\n",pibCapita1);

// Adicionando o calculo do iverso da densidade populacional da carta 1
    InversoDensidade1 = 1 / densidadepopulacao1;

//Super Poder : soma de todas os atributos da carta 1, exeto Estado, Código e Nome.
    SuperPoder1 = (float) populacao1 + area_em_km1 + pib1 + pontos_turisticos1 
    + pibCapita1 + InversoDensidade1;
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("------------------------------\n");

    printf ("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área em Km: %.2f\n", area_em_km2);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

//Calculando a densidade Populacional e PIB per Capita e adicinando com as informações da carta 2 !
    densidadepopulacao2 = (float) populacao2 / area_em_km2 ;
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacao2);

    pibCapita2 = (float) pib2/populacao2;
    printf("PIB per Capita: %.2f reais\n", pibCapita2);

// Adicionando calculo de densidade populacional inversa da carta 2
    InversoDensidade2 = 1 / densidadepopulacao2;

//Super Poder : soma de todas os atributos da carta 1, exeto Estado, Código e Nome.

    SuperPoder2 = (float) populacao2 + area_em_km2 + pib2 + pontos_turisticos2
    + pibCapita2 + densidadepopulacao2;
    printf("Super Poder: %.2f\n", SuperPoder2);
    
    printf("------------------------------\n\n");

//*******************Comparação dos atributos das Cartas***************
    printf("**************Coparação das cartas****************\n");
    printf("\n");

    printf("Resultado 1 – Carta 1 vence\n");
    printf("Resultado 0 – Carta 2 vence\n\n");

    int ResultadoPopulacao;
        ResultadoPopulacao = populacao1 > populacao2;
    printf("População: %lu\n", ResultadoPopulacao);
    printf("\n");

    int ResulatadoArea;
        ResulatadoArea = area_em_km1 > area_em_km2;
    printf("Area: %d\n", ResulatadoArea);
    printf("\n");

    int ResultadoPib;
        ResultadoPib = pib1 > pib2;
    printf("Pib: %d\n", ResultadoPib);
    printf("\n");

    int ResultadoPontosturisticos;
        ResultadoPontosturisticos = pontos_turisticos1 > pontos_turisticos2;
    printf("Pontos Turísticos: %d\n", ResultadoPontosturisticos);
    printf("\n");

    int ResultadoDensidadeP;
        ResultadoDensidadeP = densidadepopulacao1 < densidadepopulacao2;
    printf("Densidade Populacional: %d\n", ResultadoDensidadeP);
    printf("\n");

    int ResulatdoPibPercapita;
        ResulatdoPibPercapita = pibCapita1 > pibCapita2;
    printf("Pib per capita: %d\n", ResulatdoPibPercapita);
    printf("\n");
    
    int ResultadoSuperPoder;
        ResultadoSuperPoder = SuperPoder1 > SuperPoder2;
    printf("Super Poder: %d\n", ResultadoSuperPoder);


printf("------------------------------\n");
  
    return 0;
}