#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // As varáveis são declaradas e inicializadas
  
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // Carta 1
  char estado1 = 'A', codigo1[3] = "01", cidade1[50] = "belem";
  int populacao1 = 1, ponto_tur1 = 1;
  float area1 = 1.0, pib1 = 1.0, densidade_demografica1 = 1.0, pib_per_capita1 = 1.0;

  // Carta 2
  char estado2 = 'B', codigo2[3] = "02", cidade2[50] = "salvador";
  int populacao2 = 2, ponto_tur2 = 2;
  float area2 = 2.0, pib2 = 2.0, densidade_demografica2 = 2.0, pib_per_capita2 = 2.0;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // Área para entrada de dados

  printf("== Bem Vindo ao programa Super Trunfo de Países ==\n");
  printf("Nessa parte do programa vamos cadastrar as cartas. Vamos lá!\n\n");

  // Cadastro da carta 1
  // Cadastrar o estado:
  printf("Digite uma letra entre A e H para indicar o state: \n");
  scanf("%c", &estado1);

  // Cadastrar o código da carta:
  printf("Digite um código entre 01 e 04 para identificar a carta: \n");
  scanf("%s", codigo1);

  // Cadastrar o nome da cidade:
  printf("Digite o nome da cidade escolhida dentro do estado selecionado acima: \n");
  scanf("%s", cidade1);

  // Cadastrar o numero da população:
  printf("Digite o numero que representa a população da cidade: \n");
  scanf("%d", &populacao1);

  // Cadastrar a área da cidade:
  printf("Digite o tamanho da cidade em km2: \n");
  scanf("%f", &area1);

  // Cadastrar o PIB da cidade:
  printf("Digite o valor do PIB da cidade: \n");
  scanf("%f", &pib1);

  // Cadastrar o numero de pontos turisticos:
  printf("Digite o numero de pontos turísticos da cidade escolhida: \n");
  scanf("%d", &ponto_tur1);

  printf("Carta 1 cadastrada com sucesso!\n\n");


  // Cadastro da carta 2
  printf(" === Agora vamos cadastrar a segunda carta! === \n");
  scanf("%c", &estado2); // Limpar o buffer do teclado

  // Cadastrar o estado:
  printf("Digite uma letra entre A e H para indicar o state: \n");
  scanf("%c", &estado2);

  // Cadastrar o código da carta:
  printf("Digite um código entre 01 e 04 para identificar a carta: \n");
  scanf("%s", codigo2);

  // Cadastrar o nome da cidade:
  printf("Digite o nome da cidade escolhida dentro do estado selecionado acima: \n");
  scanf("%s", cidade2);

  // Cadastrar o numero da população:
  printf("Digite o numero que representa a população da cidade: \n");
  scanf("%d", &populacao2);

  // Cadastrar a área da cidade:
  printf("Digite o tamanho da cidade em km2: \n");
  scanf("%f", &area2);

  // Cadastrar o PIB da cidade:
  printf("Digite o valor do PIB da cidade: \n");
  scanf("%f", &pib2);

  // Cadastrar o numero de pontos turisticos:
  printf("Digite o numero de pontos turísticos da cidade escolhida: \n");
  scanf("%d", &ponto_tur2);

  printf("Carta 2 cadastrada com sucesso!\n\n");
  printf("=== Cadastro das cartas concluído! ===\n\n");

  densidade_demografica1 = populacao1 / area1;
  pib_per_capita1 = pib1 / populacao1;

  densidade_demografica2 = populacao2 / area2;
  pib_per_capita2 = pib2 / populacao2;


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  // Área para exibição dos dados da cidade
  // Exibir os dados das cartas cadastrada - carta 1
  printf("=== Agora vamos exibir os dados das cartas cadastradas! ===\n\n");
  printf("Carta 1");
  printf("\n\nA carta cadastrada é: %c%s\n", estado1, codigo1);
  printf("Código do estado: %c\n", estado1);
  printf("Código da carta: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("Número da População: %d\n", populacao1);
  printf("Área da cidade: %.2f km2\n", area1);
  printf("PIB da cidade: %.2f\n", pib1);
  printf("Pontos Turísticos: %d\n", ponto_tur1);
  printf("Densidade Demográfica: %.2f habitantes/km2\n", densidade_demografica1);
  printf("PIB per capita: %.2f\n\n", pib_per_capita1);

// Exibir os dados das cartas cadastrada - carta 2
  printf("Carta 2");
  printf("\n\nA carta cadastrada é: %c%s\n", estado2, codigo2);
  printf("Código do estado: %c\n", estado2);
  printf("Código da carta: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("Número da População: %d\n", populacao2);
  printf("Área da cidade: %.2f km2\n", area2);
  printf("PIB da cidade: %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", ponto_tur2);
  printf("Densidade Demográfica: %.2f habitantes/km2\n", densidade_demografica2);
  printf("PIB per capita: %.2f\n\n", pib_per_capita2); 

  return 0;
}
