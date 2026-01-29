#include <stdio.h>

// Desafio Super Trunfo - Cidades

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades

    // Carta 1
    char estado1, cod_carta1[4], nome_cidade1[30];
    unsigned long int populacao1;
    int n_pontos_turisticos1;
    float area1, pib1, densidade_pop1, pib_per_capita1, super_poder1;

    // Carta 2
    char estado2, cod_carta2[4], nome_cidade2[30];
    unsigned long int populacao2;
    int n_pontos_turisticos2;
    float area2, pib2, densidade_pop2, pib_per_capita2, super_poder2;

    // resultados comparação
    int resultado_populacao, resultado_pontos_turisticos, resultado_area;
    int resultado_pib, resultado_densidade, resultado_per_capita, resultado_poder;

    // Área para entrada de dados
    printf("Vamos começar o jogo. Insira duas cartas, seguindo o passo a passo a seguir: \n\n");

    // Carta 1
    printf("Carta 1 \nDigite uma letra (A - H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", cod_carta1);

    printf("Qual nome da cidade?  ");
    scanf("%s", nome_cidade1);

    printf("Quantos habitantes a cidade possui?  ");
    scanf("%lu", &populacao1);

    printf("Qual a área da cidade (em km²)?  ");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade?  ");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos a cidade possui?  ");
    scanf("%d", &n_pontos_turisticos1);

    densidade_pop1 = (float) populacao1 / area1;
    pib_per_capita1 = pib1 / (float) populacao1;
    super_poder1 =
        (float) populacao1 + n_pontos_turisticos1 + area1 +
        pib1 + pib_per_capita1 + (1.0 / densidade_pop1);

    /* Carta 2 */
    printf("\nCarta 2 \nDigite a letra do Estado (A - H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01):  ");
    scanf("%s", cod_carta2);

    printf("Qual nome da cidade?  ");
    scanf("%s", nome_cidade2);

    printf("Quantos habitantes a cidade possui?  ");
    scanf("%lu", &populacao2);

    printf("Qual a área da cidade (em km²)?  ");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade?  ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos a cidade possui?  ");
    scanf("%d", &n_pontos_turisticos2);

    densidade_pop2 = (float) populacao2 / area2;
    pib_per_capita2 = pib2 / (float) populacao2;
    super_poder2 =
        (float) populacao2 + n_pontos_turisticos2 + area2 +
        pib2 + pib_per_capita2 + (1.0 / densidade_pop2);

    // Demais variáveis
    int opcao;

    // Área para exibição dos dados da cidade
    printf("\n*** Aqui estão as cartas ***\n");

    /* Mostrar cartas inseridas */
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", n_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super poder: %.2f\n", super_poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", n_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super poder: %.2f\n", super_poder2);

    // Menu do Jogo
    printf("\n### Jogo Super Trunfo ###\n");
    printf("Escolha um atributo.\n");
    printf("1 - População\n");
    printf("2 - Pontos Turísticos\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");

    printf("\nDigite a opção que deseja: ");
    scanf("%d", &opcao);

    // Execução do Jogp
    switch (opcao) {

        case 1:            
            printf("\n\nComparação de cartas (Atributo - População:\n\n");
            printf("Carta 1 - %s: %u\n", nome_cidade1, populacao1);
            printf("Carta 2 - %s: %u\n", nome_cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (populacao1 < populacao2) {
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 2:            
            printf("\n\nComparação de cartas \n Atributo - Nº Pontos Turísticos:\n\n");
            printf("Carta 1 - %s: %d \n", nome_cidade1, n_pontos_turisticos1);
            printf("Carta 2 - %s: %d \n", nome_cidade2, n_pontos_turisticos2);

            if (n_pontos_turisticos1 > n_pontos_turisticos2) {
                printf("Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (n_pontos_turisticos1 < n_pontos_turisticos2) {
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 3:            
            printf("\n\nComparação de cartas \n Atributo - Área:\n\n");
            printf("Carta 1 - %s: %.2f \n", nome_cidade1, area1);
            printf("Carta 2 - %s: %.2f \n", nome_cidade2, area2);

            if (area1 > area2) {
                printf("Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (area1 < area2) {
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 4:            
            printf("\n\nComparação de cartas \n Atributo -  PIB:\n\n");
            printf("Carta 1 - %s: %.2f\n", nome_cidade1, pib1);
            printf("Carta 2 - %s: %.2f \n", nome_cidade2, pib2);

            if (pib1 > pib2) {
                printf("Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (pib1 <pib2) {
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 5:            
            printf("\n\nComparação de cartas \n Atributo - Densidade Populacional:\n\n");
            printf("Carta 1 - %s: %.2f \n", nome_cidade1, densidade_pop1);
            printf("Carta 2 - %s: %.2f \n", nome_cidade2, densidade_pop2);

            if (densidade_pop1 < densidade_pop2) {
                printf("Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (densidade_pop1 > densidade_pop2) {
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Empate!\n");
            }
        break;
        
         case 6:            
            printf("\n\nComparação de cartas \n Atributo - PIB per Capita:\n\n");
            printf("Carta 1 - %s: %.2f \n", nome_cidade1, pib_per_capita1);
            printf("Carta 2 - %s: %.2f \n", nome_cidade2, pib_per_capita1);

            if (pib_per_capita1 > pib_per_capita2) {
                printf("Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (pib_per_capita1 < pib_per_capita2) {
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 7:            
            printf("\n\nComparação de cartas \n Atributo - PIB per Capita:\n\n");
            printf("Carta 1 - %s: %.2f \n", nome_cidade1, super_poder1);
            printf("Carta 2 - %s: %.2f \n", nome_cidade2, super_poder2);

            if (super_poder1 > super_poder2) {
                printf("Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (super_poder1 < super_poder2) {
                printf("Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Empate!\n");
            }
        break;
        
        default:
            printf("Opção inválida!\n");
        break;
    }

    return 0;
}