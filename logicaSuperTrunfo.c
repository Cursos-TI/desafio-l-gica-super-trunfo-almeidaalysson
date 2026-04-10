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
int populacao, populacao2, opcao;
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
    printf("\n\n");
 denspop2 = (float) populacao2 / area2;
 pibpc2 = (float) (pib2 * 1000000000)  / populacao2;
 superpoder2 = (float) populacao2 + area2 + pib2 + turismo2 + pibpc2 + (1 / denspop2);
    printf("Escolha o atributo a ser comparado:\n1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade pouplacional\n\n");
    scanf("%d", &opcao);
    
    // Comparação de Cartas:
    switch (opcao) {
        case 1: 
            if (populacao > populacao2){
                printf("%s vs %s\n", cidade, cidade2);
                printf("O atributo usado na comparação foi POPULAÇÃO.\n");
                printf("%d vs %d\n", populacao, populacao2);
                printf("A carta %s (%s - %s) venceu!!\n", codigodacarta, cidade, estado);
            }else if (populacao == populacao2){
                printf("EMPATE!!\n");
                printf("O atributo usado na comparação foi POPULAÇÃO.\n");
                printf("%d vs %d\n", populacao, populacao2);
            }else {
                printf("%s vs %s\n", cidade, cidade2);
                printf("O atributo usado na comparação foi POPULAÇÃO.\n");
                printf("%d vs %d\n", populacao, populacao2);
                printf("A carta %s (%s - %s) venceu!!\n", codigodacarta2, cidade2, estado2);
            }break;
        case 2:
            if (area > area2){
                printf("%s vs %s\n", cidade, cidade2);
                printf("O atributo usado na comparação foi ÁREA.\n");
                printf("%.2fkm² vs %.2fkm²\n", area, area2);
                printf("A carta %s (%s - %s) venceu!!\n", codigodacarta, cidade, estado);
            }else if (area == area2){
                printf("EMPATE!!\n");
                printf("O atributo usado na comparação foi ÁREA.\n");
                printf("%.2fkm² vs %.2fkm²\n", area, area2);
            }else {
                printf("%s vs %s\n", cidade, cidade2);
                printf("O atributo usado na comparação foi ÁREA.\n");
                printf("%.2fkm² vs %.2fkm²\n", area, area2);
                printf("A carta %s (%s - %s) venceu!!\n", codigodacarta2, cidade2, estado2);
            }break;
        case 3:
            if (pib > pib2){
                printf("%s vs %s\n", cidade, cidade2);
                printf("O atributo usado na comparação foi PIB.\n");
                printf("%.2f bilhões vs %.2f bilhões.\n", pib, pib2);
                printf("A carta %s (%s - %s) venceu!!\n", codigodacarta, cidade, estado);
            }else if (pib == pib2){
                printf("EMPATE!!\n");
                printf("O atributo usado na comparação foi PIB.\n");
                printf("%.2f bilhões vs %.2f bilhões.\n", pib, pib2);
            }else {
                printf("%s vs %s\n", cidade, cidade2);
                printf("O atributo usado na comparação foi PIB.\n");
                printf("%.2f bilhões vs %.2f bilhões.\n", pib, pib2);
                printf("A carta %s (%s - %s) venceu!!\n", codigodacarta2, cidade2, estado2);
        }break;
        case 4:
            if (turismo > turismo2){
                printf("%s vs %s\n", cidade, cidade2);
                printf("O atributo usado na comparação foi PONTOS TURÍSTICOS.\n");
                printf("%d pontos turísticos vs %d pontos turísticos.\n", turismo, turismo2);
                printf("A carta %s (%s - %s) venceu!!\n", codigodacarta, cidade, estado);
            }else if (turismo == turismo2){
                printf("EMPATE!!\n");
                printf("O atributo usado na comparação foi PONTOS TURÍSTICOS.\n");
                printf("%d pontos turísticos vs %d pontos turísticos.\n", turismo, turismo2);
            }else {
                printf("%s vs %s\n", cidade, cidade2);
                printf("O atributo usado na comparação foi PONTOS TURÍSTICOS.\n");
                printf("%d pontos turísticos vs %d pontos turísticos.\n", turismo, turismo2);
                printf("A carta %s (%s - %s) venceu!!\n", codigodacarta2, cidade2, estado2);
        }break;
        case 5:
            if (denspop < denspop2){
                printf("%s vs %s\n", cidade, cidade2);
                printf("O atributo usado na comparação foi DENSIDADE POPULACIONAL.\n");
                printf("%.2f hab/km² vs %.2f hab/km².\n", denspop, denspop2);
                printf("A carta %s (%s - %s) venceu!!\n", codigodacarta, cidade, estado);
            }else if (denspop == denspop2){
                printf("EMPATE!!\n");
                printf("O atributo usado na comparação foi DENSIDADE POPULACIONAL.\n");
                printf("%.2f hab/km² vs %.2f hab/km².\n", denspop, denspop2);
            }else {
                printf("%s vs %s\n", cidade, cidade2);
                printf("O atributo usado na comparação foi DENSIDADE POPULACIONAL.\n");
                printf("%.2f hab/km² vs %.2f hab/km².\n", denspop, denspop2);
                printf("A carta %s (%s - %s) venceu!!\n", codigodacarta2, cidade2, estado2);
        }break;

    }
    

    return 0;
}
