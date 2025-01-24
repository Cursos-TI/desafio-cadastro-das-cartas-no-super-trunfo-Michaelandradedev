#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {

// Sintaxe padrão printf
//printf("texto com formatação:"", varivavel 1, variavel 2 ...);

// Definição das variáveis:

    char COD[3];
    char cidade[60];
    float populacao;
    float area;
    float PIB;
    int numerodepontosturisticos;

// Cadastro das informaçoes, essa função solicita ao usuário para inserir as informações que devem constar nas cartas.

printf("Digite o COD da carta: \n");
scanf("%s", &COD);

printf("Digite o nome da cidade: \n");
scanf("%s", &cidade);

printf("Digite o número de habitantes: \n");
scanf(" %f", &populacao);

printf("Digite a área da cidade: \n");
scanf("%f", &area);

printf("Digite o PIB da cidade: \n");
scanf("%f", &PIB);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &numerodepontosturisticos);

// Impressão dos valores ordenados de acordo com a organização solicitada.

printf("COD: %d\n Cidade: %s\n População: %f\n Área: %f\n PIB: %f\n Número de pontos turísticos: %d\n", COD, cidade, populacao, area, PIB, numerodepontosturisticos);

return 0;

}
