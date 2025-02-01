#include <stdio.h>

int main() {

// Sintaxe padrão printf
//printf("texto com formatação:", varivavel 1, variavel 2 ...);
    double densidadevencedora;
    double comparacao;
    double superpoder;

//carta 01
    char codigocarta1[3];
    char cidade1[60];
    int populacao1;
    int numerodepontosturisticos1;
    float area1;
    float densidadepopulacional1;
    double PIB1;
    double pibpercapita1;
    double superpoder1;

//carta 02
    char codigocarta2[3];
    char cidade2[60];
    int populacao2;
    int numerodepontosturisticos2;
    float area2;
    float densidadepopulacional2;
    double PIB2;
    double pibpercapita2;
    double superpoder2;

// Cadastro das informaçoes, essa função solicita ao usuário para inserir as informações que devem constar nas cartas;

// Carta 1;
printf("**** BEM VINDO AO CADASTRO DO SUPER TRUNFO!! ****\n");
printf("\n");

printf("Digite o código da carta 1: \n");
scanf("%s", codigocarta1);

printf("Digite o nome da cidade: \n");
scanf(" %[^\n]", &cidade1);

printf("Digite o número de habitantes: \n");
scanf(" %d", &populacao1);

printf("Digite a área da cidade: \n");
scanf("%f", &area1);

printf("Digite o PIB da cidade: \n");
scanf("%lf", &PIB1);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &numerodepontosturisticos1);

// Calculos - densidade populacional e PIB per Capita CARTA 1;
densidadepopulacional1 = populacao1 / area1;
pibpercapita1 = PIB1 / populacao1;

//calculo super poder carta 1;
superpoder1 = populacao1 + area1 + PIB1 + numerodepontosturisticos1;

// Carta 2;
printf("Digite o código da carta 2: \n");
scanf("%s", codigocarta2);

printf("Digite o nome da cidade: \n");
scanf(" %[^\n]", &cidade2);

printf("Digite o número de habitantes: \n");
scanf(" %d", &populacao2);

printf("Digite a área da cidade: \n");
scanf("%f", &area2);

printf("Digite o PIB da cidade: \n");
scanf("%lf", &PIB2);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &numerodepontosturisticos2);

// Calculos - densidade populacional, PIB per Capita e super poder CARTA 2;
densidadepopulacional2 = populacao2 / area2;
pibpercapita2 = PIB2 / populacao2;

//calculo super poder carta 2;
superpoder2 = populacao2 + area2 + PIB2 + numerodepontosturisticos2;

// Impressão dos valores CARTA 1 e 2, ordenados de acordo com a organização solicitada;
printf("\n>>> CARTA 1 <<<\n");
printf("COD: %s\n", codigocarta1);
printf("Cidade: %s\n", cidade1);
printf("População: %d habitantes\n", populacao1);
printf("Área: %.1f km²\n", area1);
printf("PIB: R$ %.2lf\n", PIB1);
printf("Número de pontos turísticos: %d\n", numerodepontosturisticos1);
printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
printf("PIB per Capita: R$ %.2lf\n", pibpercapita1);
printf("*******SUPER PODER %.2lf\n", (double)superpoder1);

printf("\n>>> CARTA2 <<<\n");
printf("COD: %s\n", codigocarta2);
printf("Cidade: %s\n", cidade2);
printf("População: %d habitantes\n", populacao2);
printf("Área: %.1f km²\n", area2);
printf("PIB: R$ %.2lf\n", PIB2);
printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);
printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
printf("PIB per Capita: R$ %.2lf\n", pibpercapita2);
printf("*******SUPER PODER %.2lf\n", (double)superpoder2);

//Cálculo carta campeã;
//comparação das densidades;
comparacao = densidadepopulacional1 > densidadepopulacional2;
superpoder = superpoder1 > superpoder2;

//determinação do vencedor;

printf("\n");
printf(">>>>>DENSIDADE DEMOGRÁFICA: ");

if (comparacao) {
printf("A CARTA 2 VENCEU\n");    
} else {
printf("A CARTA 1 VENCEU\n");
}

printf("\n");
printf(">>>>>SUPER PODER: ");

if (comparacao) {
printf("A CARTA 1 VENCEU\n");    
} else {
printf("A CARTA 2 VENCEU\n");
}

printf("\n");
printf("\n<<<<<<<<< OBRIGADO POR JOGAR SUPER TRUNFO! >>>>>>\n");
printf("\n");

return 0;

}