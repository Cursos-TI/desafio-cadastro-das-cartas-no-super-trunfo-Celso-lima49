#include <stdio.h>

int main() {
    // Declaração de variáveis da Carta 1
    char estado1;
    char codigo1[4];   
    char nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade_pop1, pib_per_capita1;
     
    // Declaração de variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade_pop2, pib_per_capita2;
      

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado1); // Espaço antes do %c para ignorar caracteres anteriores
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // %[^\n], possibilita escrever nome de cidades usando o espaço ex: rio dos bois.
    printf("Digite o número de habitantes: "); 
    scanf(" %d", &populacao1); 
    printf("Digite a área (em km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);
    

    // Cálculo da Densidade e PIB per capita para a Carta 1
    densidade_pop1 =  populacao1 / area1;
    pib_per_capita1 =  (pib1 * 1000000000) / populacao1;
    
    

    printf("\n"); // pular linha dos dados da carta 01 para carta 02.

    // Entrada de dados da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2); // %[^\n], possibilita escrever nome de cidades usando o espaço ex: rio dos bois.
    printf("Digite o número de habitantes: ");
    scanf(" %d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo da Densidade e PIB per capita para a Carta 2
    densidade_pop2 =  populacao2 / area2;
    pib_per_capita2 =  (pib2 * 1000000000) / populacao2;

    printf("\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional é: %.2f\n", densidade_pop1);
    printf("PIB per Capita é: %.2f\n", pib_per_capita1);
   

    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional é: %.2f\n", densidade_pop2);
    printf("PIB per Capita é: %.2f\n", pib_per_capita2);

    return 0;
}
