#include <stdio.h>

int main() {

// Sintaxe padrão printf
//printf("texto com formatação:", varivavel 1, variavel 2 ...);

// Definição das variáveis:

    char codigocarta[3];
    char cidade[60];
    int populacao;
    int numerodepontosturisticos;
    float area;
    float densidadepopulacional;
    double PIB;
    double pibpercapita;



// Cadastro das informaçoes, essa função solicita ao usuário para inserir as informações que devem constar nas cartas.

printf("**** BEM VINDO AO CADASTRO DO SUPERTRUNFO!! ****\n");
printf("\n");

printf("Digite o COD da carta: \n");
scanf("%s", codigocarta);

printf("Digite o nome da cidade: \n");
scanf(" %[^\n]", &cidade);

printf("Digite o número de habitantes: \n");
scanf(" %d", &populacao);

printf("Digite a área da cidade: \n");
scanf("%f", &area);

printf("Digite o PIB da cidade: \n");
scanf("%lf", &PIB);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &numerodepontosturisticos);

// Calculos - densidade populacional e PIB per Capita;

densidadepopulacional = populacao / area;
pibpercapita = PIB / populacao;

// Impressão dos valores ordenados de acordo com a organização solicitada.

printf("\n>>> CARTA <<<\n");
printf("COD: %s\n", codigocarta);
printf("Cidade: %s\n", cidade);
printf("População: %d habitantes\n", populacao);
printf("Área: %.1f km²\n", area);
printf("PIB: R$ %.2lf\n", PIB);
printf("Número de pontos turísticos: %d\n", numerodepontosturisticos);
printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional);
printf("PIB per Capita: R$ %.2lf\n", pibpercapita);
printf("\n");
printf("\n<<<<<<<<< Obrigado >>>>>>\n");
printf("\n");

return 0;

}