#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
   
// Área para definição das variáveis para armazenar as propriedades das cidades
char estado[20], estado2[20];
char codigodacarta[5], codigodacarta2[5];
char cidade[20], cidade2[20];
int populacao, populacao2;
float area, area2;
float pib, pib2;
int turismo, turismo2;
float denspop, denspop2;
float pibpc, pibpc2;
float superpoder1, superpoder2;
    
    // Cadastro das Cartas:
    printf("*** CIDADE 1 ***\n\n");
    printf("Informe o código da carta: \n");
    scanf("%s", codigodacarta);
    printf("Informe seu Estado: \n");
    scanf("%s", estado);
    printf("Informe sua cidade: \n");
    scanf("%s", cidade);
    printf("Informe a população (numero inteiro, sem vírgula.): \n");
    scanf("%d", &populacao);
    printf("Informe a área em km²: \n");
    scanf("%f", &area);
    printf("Informe o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib);
    printf("Informe o numero de pontos turísticos: \n");
    scanf("%d", &turismo);
    printf("\n");
// Área para calculo das informações enviadas
denspop = (float) populacao / area;
pibpc = (float) (pib * 1000000000) / populacao;
superpoder1 = (float) populacao + area + pib + turismo + pibpc + (1 / denspop);

// ------------------------------------------------------------------------
    printf("*** CIDADE 2 ***\n\n");
    printf("Informe o código da carta: \n");
    scanf("%s", codigodacarta2);
    printf("Informe seu Estado: \n");
    scanf("%s", estado2);
    printf("Informe sua cidade: \n");
    scanf("%s", cidade2);
    printf("Informe a população (número inteiro, sem vírgula.): \n");
    scanf("%d", &populacao2);
    printf("Informe a área em km²: \n");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib2);
    printf("Informe o numero de pontos turísticos: \n");
    scanf("%d", &turismo2);
    printf("\n");
 denspop2 = (float) populacao2 / area2;
 pibpc2 = (float) (pib2 * 1000000000)  / populacao2;
 superpoder2 = (float) populacao2 + area2 + pib2 + turismo2 + pibpc2 + (1 / denspop2);

    // Comparação de Cartas:
    if (superpoder1 > superpoder2) {
        printf("A carta %s venceu!!\nSeu SUPER PODER é %.2f\n", codigodacarta, superpoder1);
    } else {
    printf("A carta %s venceu!!\nSeu SUPER PODER é %.2f\n", codigodacarta2, superpoder2);
    }
    return 0;
}
