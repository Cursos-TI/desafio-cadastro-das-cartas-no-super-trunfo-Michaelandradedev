#include <stdio.h>

int main() {

// Sintaxe padrão printf
//printf("texto com formatação:", varivavel 1, variavel 2 ...);

// Definição das variáveis:

    char codigoestado;
    char codigocidade[3];
    char cidade[60];
    float populacao;
    float area;
    float PIB;
    int numerodepontosturisticos;

// Cadastro das informaçoes, essa função solicita ao usuário para inserir as informações que devem constar nas cartas.

printf("Digite o COD do estado (letra): \n");
scanf(" %C", &codigoestado);

printf("Digite o COD da cidade (número) \n");
scanf("  %S", &codigocidade);

printf("Digite o nome da cidade: \n");
scanf("  %s", &cidade);

printf("Digite o número de habitantes: \n");
scanf(" %f", &populacao);

printf("Digite a área da cidade: \n");
scanf("%f", &area);

printf("Digite o PIB da cidade: \n");
scanf("%f", &PIB);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &numerodepontosturisticos);

// Impressão dos valores ordenados de acordo com a organização solicitada.

printf("COD: %C0%s\n", codigoestado, codigocidade);
printf("Cidade: %s\n População: %f\n Área: %f\n PIB: %f\n Número de pontos turísticos: %d\n", cidade, populacao, area, PIB, numerodepontosturisticos);

return 0;

}
