#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // As varáveis são declaradas e inicializadas
  char estado = 'A';
  char codigo[3] = "01";
  char cidade[50] = "belem";
  int populacao = 1;
  float area = 1.0;
  float pib = 1.0;
  int ponto_tur = 1;

  // Área para entrada de dados
  printf("Bem Vindo ao programa Super Trunfo de Países.\n");
  printf("Nessa parte do programa vamos cadastrar as cartas. Vamos lá!\n\n");

  // Cadastrar o estado:
  printf("Digite uma letra entre A e H para indicar o estado: \n");
  scanf("%c", &estado);

  // Cadastrar o código da carta:
  printf("Digite um código entre 01 e 04 para identificar a carta: \n");
  scanf("%s", codigo);

  // Cadastrar o nome da cidade:
  printf("Digite o nome da cidade escolhida dentro do estado selecionado acima: \n");
  scanf("%s", cidade);

  // Cadastrar o numero da população:
  printf("Digite o numero que representa a população da cidade: \n");
  scanf("%d", &populacao);

  // Cadastrar a área da cidade:
  printf("Digite o tamanho da cidade em km2 (duas casas decimas separadas por . ): \n");
  scanf("%f", &area);

  // Cadastrar o PIB da cidade:
  printf("Digite o valor do PIB da cidade (duas casas decimas separadas por . ): \n");
  scanf("%f", &pib);

  // Cadastrar o numero de pontos turisticos:
  printf("Digite o numero de pontos turísticos da cidade escolhida: \n");
  scanf("%d", &ponto_tur);

  // Área para exibição dos dados da cidade

  return 0;
}
