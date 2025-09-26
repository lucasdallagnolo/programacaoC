#include <stdio.h>

int main() {
   // Variáveis
    char estado1[10], nomecidade1[20], codigo1[20];
    char estado2[10], nomecidade2[20], codigo2[20];
    unsigned long int populacao1, populacao2;
    int nturista1, nturista2;
    float area1, pib1, area2, pib2;
    float densidade1, densidade2, PibCa1, PibCa2;
    float super1, super2;

    // Entrada da primeira carta
    printf("Dados da primeira carta: \n");
    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o codigo: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomecidade1);

    printf("Digite a populacao: \n");
    scanf("%lu", &populacao1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &nturista1);

    densidade1 = (float) populacao1 / area1;
    PibCa1 = pib1 / populacao1;
    super1 = (float)populacao1 + area1 + pib1 + nturista1 + PibCa1 + (1.0f / densidade1);

    // Entrada da segunda carta
    printf("\nDados da segunda carta: \n");
    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o codigo: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite a populacao: \n");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &nturista2);

    densidade2 = (float) populacao2 / area2;
    PibCa2 = pib2 / populacao2;
    super2 = (float)populacao2 + area2 + pib2 + nturista2 + PibCa2 + (1.0f / densidade2);

    // Exibição dos dados
    printf("\nPrimeira Carta \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo da cidade: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nomecidade1);
    printf("Populacao: %lu \n", populacao1);
    printf("Area: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Numero de pontos turisticos: %d \n", nturista1);
    printf("Densidade populacional: %.2f \n", densidade1);
    printf("PIB per capita: %.2f \n", PibCa1);
    printf("Super Poder: %.2f \n", super1);

    printf("\nSegunda Carta \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da cidade: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomecidade2);
    printf("Populacao: %lu \n", populacao2);
    printf("Area: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Numero de pontos turisticos: %d \n", nturista2);
    printf("Densidade populacional: %.2f \n", densidade2);
    printf("PIB per capita: %.2f \n", PibCa2);
    printf("Super Poder: %.2f \n", super2);

    // Comparações
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu? (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu? (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu? (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu? (%d)\n", nturista1 > nturista2);
    printf("Densidade Populacional: Carta 1 venceu? (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu? (%d)\n", PibCa1 > PibCa2);
    printf("Super Poder: Carta 1 venceu? (%d)\n", super1 > super2);

    return 0;
}
