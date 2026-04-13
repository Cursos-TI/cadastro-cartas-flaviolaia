#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // As varáveis são declaradas e inicializadas
  char estado = "A";
  char codigo[] = "01";
  char cidade[] = "belem";
  int populacao = 1;
  float area = 1.0;
  float pib = 1.0;
  int ponto_tur = 1;

  // Área para entrada de dados
  printf("Bem Vindo ao programa Super Trunfo de Países.\n");
  printf("Nessa parte do programa vamos cadastrar as cartas. Vamos lá!\n");

  // Cadastrar o estado:
  printf("Digite uma letra entre A e H para indicar o estado: \n");
  scanf("%c", &estado);

  // Cadastrar o estado:
  printf("Digite um código estado: \n");
  scanf("%c", &estado);
  // Área para exibição dos dados da cidade

  return 0;
}
