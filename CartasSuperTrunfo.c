#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];         
    int populacao1;               /* MOLDE EXEMPLO DO CURSO
    
                                    Carta 1:                                                       
                                    Estado: A
                                    Código: A01
                                    Nome da Cidade: São Paulo
                                    População: 12325000
                                    Área: 1521.11 km²
                                    PIB: 699.28 bilhões de reais
                                    Número de Pontos Turísticos: 50

                                    DESCOBRI QUE PONTO E VIRGULA FAZ TODA DIFERENÇA! E ME DEU DOR DE CABEÇA!*/
                                    
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura da Carta 1
    printf("Cadastro da Carta 1: \n");
    printf("Estado (A-H): ");
    scanf(" %c",&estado1);  // espaço antes de %c para evitar ler ENTER anterior

    printf("Codigo da Carta (ex: A01):");
    scanf("%s",codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);  // lê até o ENTER, permitindo nomes compostos

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura da Carta 2
    printf("\nCadastro da Carta 2:\n ");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1); // ponto e vírgula corrigido
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}