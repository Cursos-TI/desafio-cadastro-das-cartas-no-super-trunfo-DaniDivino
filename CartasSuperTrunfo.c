#include <stdio.h>

int main()
{
        struct Carta
    {                // Estrutura para armazenar as informações de uma carta
        char estado; // variáveis criadas dentro da estrutura
        char codigo[4];
        char nomeCidade[50];
        unsigned long int populacao;
        float area;
        float pib;
        int pontosTuristicos;
        float densidade;    // adicionado novas variaveis <= aventuteiro
        float perCapita;    // adicionado novas variaveis <= aventuteiro
        int pontoDensidade; // Criada para ponto negativo da densidade => mestre
    };

    struct Carta carta1, carta2; // Array que armazena 2 cartas

    carta1.pontoDensidade = 0; // Atribuindo valor inicial para a lógica ser correta
    carta2.pontoDensidade = 0;

    int menu;

    printf("Bem Vindo ao Game SuperTruno!!!\n");
    printf("Escolha uma opção\n");
    printf("Digite 1° Iniciar Jogo\n");
    printf("Digite 2° Regras do Jogo\n");
    printf("Digite 3° para Sair\n");
    scanf("%d", &menu);

    switch (menu)
    {

    case 1:
        // requisitando informações para a carta 1, e adicionando os valores nas variaveis criadas.
        printf("Informações da Cidade CARTA 1 \n\n");

        printf("Informe a letra que representa seu estado de A à H: ");
        scanf(" %c", &carta1.estado);
        printf("Informe a letra do seu estado seguida de 2 numeros entre 01 e 04: ");
        scanf(" %s", carta1.codigo);
        printf("Informe o nome da sua cidade: ");
        scanf(" %s", carta1.nomeCidade);
        printf("Qual o número de habitantes na sua cidade: ");
        scanf(" %lu", &carta1.populacao);
        printf("Qual a área (em km²): ");
        scanf(" %f", &carta1.area);
        printf("Qual o pib: ");
        scanf(" %f", &carta1.pib);
        printf("Qual a quantidade de pontos turisticos da região: ");
        scanf(" %d", &carta1.pontosTuristicos);

        carta1.perCapita = (float)carta1.pib / carta1.populacao;  // calculo para atribuição de valores <= aventuteiro
        carta1.densidade = (float)carta1.populacao / carta1.area; // calculo para atribuição de valores <= aventuteiro

        // requisitando informações para a carta 2, e adicionando os valores nas variaveis criadas.
        printf("\n\nInformações da Cidade CARTA 2 \n\n");
        printf("Informe a letra que representa seu estado de A à H: ");
        scanf(" %c", &carta2.estado);
        printf("Informe a letra do seu estado seguida de 2 numeros entre 01 e 04: ");
        scanf(" %s", carta2.codigo);
        printf("Informe o nome da sua cidade: ");
        scanf(" %s", carta2.nomeCidade);
        printf("Qual o número de habitantes na sua cidade: ");
        scanf(" %lu", &carta2.populacao);
        printf("Qual a área (em km²): ");
        scanf(" %f", &carta2.area);
        printf("Qual o pib: ");
        scanf(" %f", &carta2.pib);
        printf("Qual a quantidade de pontos turisticos da região: ");
        scanf(" %d", &carta2.pontosTuristicos);

        carta2.perCapita = (float)carta2.pib / carta2.populacao;  // calculo para atribuição de valores <= aventuteiro
        carta2.densidade = (float)carta2.populacao / carta2.area; // calculo para atribuição de valores <= aventuteiro

        // Mostrando os valores da carta 1 e 2 conforme solicitado noe exercicio.
        printf("\nCarta 1 \n"
               "Estado: %c \n"
               "Código: %s \n"
               "Nome da Cidade: %s \n"
               "População: %lu \n"
               "Área: %.6f km² \n"
               "PIB: %.6f bilhões de reais \n"
               "Número de Pontos Turísticos: %d \n"
               "PIB per Capita: %.6f \n" // Impressão dos novos valores <= aventuteiro
               "Densidade Populacional: %.6f \n\n",
               carta1.estado, carta1.codigo, carta1.nomeCidade, carta1.populacao, // Impressão dos novos valores <= aventuteiro
               carta1.area, carta1.pib, carta1.pontosTuristicos, carta1.perCapita, carta1.densidade);
        printf("Carta 2 \n"
               "Estado: %c \n"
               "Código: %s \n"
               "Nome da Cidade: %s \n"
               "População: %lu \n"
               "Área: %.6f km² \n"
               "PIB: %.6f bilhões de reais \n"
               "Número de Pontos Turísticos: %d \n"
               "PIB per Capita: %.6f \n" // Impressão dos novos valores <= aventuteiro
               "Densidade Populacional: %.6f \n\n ",
               carta2.estado, carta2.codigo, carta2.nomeCidade, carta2.populacao, // Impressão dos novos valores <= aventuteiro
               carta2.area, carta2.pib, carta2.pontosTuristicos, carta2.perCapita, carta2.densidade);

        // Lógica Condicional para comparação de valores e cartas 1 e 2 <= Mestre
        printf("Comparação de Cartas\n");

        if (carta1.populacao > carta2.populacao)
        { // Se a carta 1 for maior que a carta 2 <= Mestre
            printf("População: Carta 1 Venceu\n");
        }
        else
        {
            printf("População: Carta 2 Venceu\n");
        }

        if (carta1.area > carta2.area)
        {
            printf("Área: Carta 1 Venceu\n");
        }
        else
        {
            printf("Área: Carta 2 Venceu\n");
        }

        if (carta1.pib > carta2.pib)
        {
            printf("PIB: Carta 1 Venceu\n");
        }
        else
        {
            printf("PIB: Carta 2 Venceu\n");
        }

        if (carta1.pontosTuristicos > carta2.pontosTuristicos)
        {
            printf("Pontos Turísticos: Carta 1 Venceu\n");
        }
        else
        {
            printf("Pontos Turísticos: Carta 2 Venceu\n");
        }

        if (carta1.densidade < carta2.densidade)
        {
            carta1.pontoDensidade = 1; // Ponto para a menor densidade para carta 1
            printf("Densidade Populacional: Carta 1 Venceu\n");
        }
        else
        {
            carta2.pontoDensidade = 1; // Ponto para a menor densidade para carta 2
            printf("Densidade Populacional: Carta 2 Venceu\n");
        }

        if (carta1.perCapita > carta2.perCapita)
        {
            printf("PIB per Capita: Carta 1 Venceu\n");
        }
        else
        {
            printf("PIB per Capita: Carta 2 Venceu\n");
        }

        /* Lógica Condicional para comparação do super poder e já mostrar o resultado <= Mestre */
        float superTrunfo1 = carta1.populacao + carta1.area + carta1.pib +
                             carta1.pontosTuristicos + carta1.pontoDensidade + carta1.perCapita;

        float superTrunfo2 = carta2.populacao + carta2.area + carta2.pib +
                             carta2.pontosTuristicos + carta2.pontoDensidade + carta2.perCapita;

        if (superTrunfo1 > superTrunfo2)
        {
            printf("Super Poder: Carta 1 venceu. (%d)\n", carta1.pontoDensidade);
        }
        else
        {
            printf("Super Poder: Carta 2 venceu.(%d)\n", carta2.pontoDensidade);
        }

        break;
    case 2:
        printf("A regras são basicas, não roube\n");
        break;
    case 3:
        printf("Jogo Finalizado, obrigado por jogar\n");
        break;

    default:
        printf("Opção Inválida, digite novamente\n");
    }

    return 0;
}
