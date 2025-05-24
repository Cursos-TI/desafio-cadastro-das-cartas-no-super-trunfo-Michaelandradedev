#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

// Definição das variáveis gerais:
    double densidadevencedora;
    double superpoder;
    int opcao1, opcao2;
    char sair;
    char invalido;
    char regras;

//Variáveis carta 01:
    char codigocarta1[3];
    char estado1[60];
    char cidade1[60];
    int populacao1;
    int numerodepontosturisticos1;
    float area1;
    float densidadepopulacional1;
    double PIB1;
    double pibpercapita1;
    double superpoder1;

//Variáveis carta 02:
    char codigocarta2[3];
    char estado2[60];
    char cidade2[60];
    int populacao2;
    int numerodepontosturisticos2;
    float area2;
    float densidadepopulacional2;
    double PIB2;
    double pibpercapita2;
    double superpoder2;

//Mensagem de boas vindas:

    printf("\n");
    printf(">>>>>>>>>> Bem vindo ao Super trunfo <<<<<<<<<<\n");

//Menu interativo inicial:

while (1)
{
    printf("\n");
    printf("MENU PRINCIPAL\n");
    printf("\n");
    printf("1. Cadastrar as duas cartas\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair do JOGO");
    printf("\n");
    printf("Escolha uma opção\n");
    scanf("%d", &opcao1);
    printf("\n");

switch (opcao1)
{
case 1:

// Cadastro das cartas:
// Carta 1;
    printf("Digite o COD da carta 1: \n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &cidade1);

    printf("Digite o estado: \n");
    scanf(" %[^\n]", &estado1);

    printf("Digite o número de habitantes: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos1);

// Carta 2;
    printf("Digite o COD da carta 2: \n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &cidade2);

    printf("Digite o estado: \n");
    scanf(" %[^\n]", &estado2);

    printf("Digite o número de habitantes: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos2);

//Cálculo SUPER PODER / DENSIDADE POPULACIONAL:
//Carta 1
    superpoder1 = populacao1 + area1 + PIB1 + numerodepontosturisticos1;
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = PIB1 / populacao1;
//Carta 2
    superpoder2 = populacao2 + area2 + PIB2 + numerodepontosturisticos2;
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = PIB2 / populacao2;
    break;
    
case 2:

//Descrição das regras
    printf(">>>> Regras do jogo <<<<\n");
    printf("\n");
    printf("Cadastre 2 cartas, informando:\n");
    printf("\n");
    printf("A - CÓDIGO DA CARTA ( EX. A01 ).\n");
    printf("B - NOME DA CIDADE.\n");
    printf("C - ESTADO.\n");
    printf("D - NÚMERO DE HABITANTES.\n");
    printf("E - ÁREA DA CIDADE.\n");
    printf("F - PIB.\n");
    printf("G - QUANTIDADE DE PONTOS TURÍSTICOS.\n");
    printf("\n");
    printf("O jogo calculará automaticamente o SUPER PODER da carta (soma de todos os atributos,\n");
    printf("calculará também a DENSIDADE POPULACIONAL.\n");
    printf("\n");
    printf("Escolha no menu 'VAMOS JOGAR' a opção 2 'Comparar as CARTAS'.\n");
    printf("O jogo exibirá qual carta foi a vencedora de acordo com cada atributo.\n");
    printf("\n");
    break;

case 3:

printf("SAINDO DO JOGO\n");
printf("OBRIGADO POR JOGAR!\n");
printf("\n");
    return 0;

default:
printf(">>>>> OPÇÃO INVÁLIDA <<<<<\n");

    break;
}

//Menu interativo do jogo:
if (opcao1 == 1){
while (1){

printf("\n");
printf("VAMOS JOGAR!!!\n");
printf("\n");
printf("1. Ver as duas CARTAS\n");
printf("2. Comparar as CARTAS\n");
printf("3. SAIR\n");
printf("Escolha uma opção:\n");
printf("\n");
scanf("%d", &opcao2);


switch (opcao2)
    {
    case 1:
        printf("\n>>> CARTA 1 <<<\n");
        printf("COD: %s\n", codigocarta1);
        printf("Cidade: %s\n", cidade1);
        printf("Estado: %s\n", estado1);
        printf("População: %d habitantes\n", populacao1);
        printf("Área: %.1f km²\n", area1);
        printf("PIB: R$ %.2lf\n", PIB1);
        printf("Número de pontos turísticos: %d\n", numerodepontosturisticos1);
        printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
        printf("PIB per Capita: R$ %.2lf\n", pibpercapita1);
        printf("*******SUPER PODER %.2lf\n", (double)superpoder1); 
        
        printf("\n>>> CARTA 2 <<<\n");
        printf("COD: %s\n", codigocarta2);
        printf("Cidade: %s\n", cidade2);
        printf("Estado: %s\n", estado2);
        printf("População: %d habitantes\n", populacao2);
        printf("Área: %.1f km²\n", area2);
        printf("PIB: R$ %.2lf\n", PIB2);
        printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);
        printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
        printf("PIB per Capita: R$ %.2lf\n", pibpercapita2);
        printf("*******SUPER PODER %.2lf\n", (double)superpoder2);

        break;

    case 2:

        printf("Comparação das CARTAS\n");

    printf("\nPOPULAÇÃO:");
     if (populacao1 > populacao2)
    {
        printf("A CARTA 1 É A VENCEDORA!\n");
    } else if (populacao1 < populacao2)
    {
        printf("A CARTA 2 É A VENCEDORA!\n");
    } else {
        printf("EMPATE!!\n");
    }

    printf("ÁREA:");
    if (area1 > area2)
    {
        printf("A CARTA 1 É A VENCEDORA!\n");
    } else if (area1 < area2)
    {
        printf("A CARTA 2 É A VENCEDORA!\n");
    } else {
        printf("EMPATE!!\n");

}

    printf("PIB:");
    if (PIB1 > PIB2)
    {
        printf("A CARTA 1 É A VENCEDORA!\n");
    } else if (PIB1 < PIB2)
    {
        printf("A CARTA 2 É A VENCEDORA!\n");
    } else {
        printf("EMPATE!!\n");
}

    printf("PONTOS TURÍSTICOS:");
    if (numerodepontosturisticos1 > numerodepontosturisticos2)
    {
        printf("A CARTA 1 É A VENCEDORA!\n");
    } else if (numerodepontosturisticos1 < numerodepontosturisticos2)
    {
        printf("A CARTA 2 É A VENCEDORA!\n");
    } else {
        printf("EMPATE!!\n");
}

    printf("DENSIDADE POPULACIONAL:");
    if (densidadepopulacional1 < densidadepopulacional2)
    {
        printf("A CARTA 1 É A VENCEDORA!\n");
    } else if (densidadepopulacional1 > densidadepopulacional2)
    {
        printf("A CARTA 2 É A VENCEDORA!\n");
    } else {
        printf("EMPATE!!\n");
}

printf("PIB PER CAPTA:");
    if (pibpercapita1 > pibpercapita2)
    {
        printf("A CARTA 1 É A VENCEDORA!\n");
    } else if (pibpercapita1 < pibpercapita2)
    {
        printf("A CARTA 2 É A VENCEDORA!\n");
    } else {
        printf("EMPATE!!\n");
}        

printf("SUPER PODER:");
    if (superpoder1 > superpoder2)
    {
        printf("A CARTA 1 É A VENCEDORA!\n");
    } else if (superpoder1 < superpoder2)
    {
        printf("A CARTA 2 É A VENCEDORA!\n");
    } else {
        printf("EMPATE!!\n");
}   

        break;

    case 3:
        printf("SAINDO DO JOGO!\n");
        printf("OBRIGADO POR JOGAR!\n");
        printf("\n");
        return 0;

    default:
        printf(">>>>> OPÇÃO INVÁLIDA <<<<<\n");

        break;
        
    }
    }}}}