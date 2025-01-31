#include <stdio.h>

int main(){

//Definição das variáveis
int matricula;
float nota1;
float nota2;
float nota3;
float nota4;
float nota5;
float soma;
float media;
char nome[20];

//Solicitação de inserção de dados por parte do usuário
printf("Insira o nome do aluno: %s\n");
scanf("%s", &nome);

printf("Insira a matrícula: %d\n");
scanf("%d", &matricula);

printf("Insira a 1º nota: %f\n");
scanf("%f", &nota1);

printf("Insira a 2º nota: %f\n");
scanf("%f", &nota2);

printf("Insira a 3º nota: %f\n");
scanf("%f", &nota3);

printf("Insira a 4º nota: %f\n");
scanf("%f", &nota4);

printf("Insira a 5º nota: %f\n");
scanf("%f", &nota5);

//calculo da media de notas
soma = nota1 + nota2 + nota3 + nota4 + nota5;


//resultados e informações;
printf("Nome: %s\n", nome);
printf("Média: %.2f\n", soma/5);
printf("Resumo de notas:\n");
printf("Nota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\nNota 4: %.2f\nNota 5: %.2f\n", nota1, nota2, nota3, nota4, nota5);


return 0;




}