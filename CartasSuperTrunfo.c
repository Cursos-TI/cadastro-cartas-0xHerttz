#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

typedef struct {
    char estado;           
    char codigo[5];        
    char nome_cidade[50];  
    int populacao;         
    float area_km2;        
    float pib_bilhoes;     
    int pontos_turisticos; 
} Carta;


  int main() {
    Carta carta1;
    Carta carta2;

    printf("==================================================\n");
    printf("        Cadastro de Cartas Super Trunfo de Cidades\n");
    printf("==================================================\n\n");

    printf("--- Insira os dados da CARTA 1 ---\n");

    printf("1. Estado (A-H): ");
   
    scanf(" %c", &carta1.estado); 

    printf("2. Codigo da Carta (Ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("3. Nome da Cidade (sem espacos): ");
    scanf("%s", carta1.nome_cidade); 
    
    printf("4. Populacao (habitantes): ");
    scanf("%d", &carta1.populacao);

    printf("5. Area (em km²): ");
    scanf("%f", &carta1.area_km2);

    printf("6. PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib_bilhoes);

    printf("7. Pontos Turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\n\n--- Insira os dados da CARTA 2 ---\n");

    printf("1. Estado (A-H): ");
    
    scanf(" %c", &carta2.estado); 

    printf("2. Codigo da Carta (Ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("3. Nome da Cidade (sem espacos): ");
    scanf("%s", carta2.nome_cidade);
    
    printf("4. Populacao (habitantes): ");
    scanf("%d", &carta2.populacao);

    printf("5. Area (em km²): ");
    scanf("%f", &carta2.area_km2);

    printf("6. PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib_bilhoes);

    printf("7. Pontos Turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    printf("\n\n==================================================\n");
    printf("           DADOS DAS CARTAS CADASTRADAS\n");
    printf("==================================================\n");

    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo da Carta: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area_km2);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib_bilhoes);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo da Carta: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area_km2);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib_bilhoes);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontos_turisticos);

    return 0;
} 
