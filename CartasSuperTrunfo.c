#include <stdio.h> 

int main() {

struct Carta { // Estrutura para armazenar as informações de uma carta
    char estado; //variáveis criadas dentro da estrutura 
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};
struct Carta carta1, carta2; // Array que armazena 2 cartas

// requisitando informações para a carta 1, e adicionando os valores nas variaveis criadas.
printf ("Informações da Cidade CARTA 1 \n\n");

printf ("Informe a letra que representa seu estado de A à H: ");
scanf ("%c", &carta1.estado);
printf ("Informe a letra do seu estado seguida de 2 numeros entre 01 e 04: ");
scanf ("%s", &carta1.codigo);
printf ("Informe o nome da sua cidade: ");
scanf ("%s", &carta1.nomeCidade);
printf ("Qual o número de habitantes na sua cidade: ");
scanf ("%d", &carta1.populacao);
printf ("Qual a área (em km²): ");
scanf ("%f", &carta1.area);
printf ("Qual o pib: ");
scanf ("%f", &carta1.pib);
printf ("Qual a quantidade de pontos turisticos da região: ");
scanf ("%d", &carta1.pontosTuristicos);
;
// requisitando informações para a carta 2, e adicionando os valores nas variaveis criadas.
printf ("\n\nInformações da Cidade CARTA 2 \n\n");
printf ("Informe a letra que representa seu estado de A à H: ");
scanf (" %c", &carta2.estado); 
printf ("Informe a letra do seu estado seguida de 2 numeros entre 01 e 04: ");
scanf ("%s", &carta2.codigo);
printf ("Informe o nome da sua cidade: ");
scanf ("%s", &carta2.nomeCidade);
printf ("Qual o número de habitantes na sua cidade: ");
scanf ("%d", &carta2.populacao);
printf ("Qual a área (em km²): ");
scanf ("%f", &carta2.area);
printf ("Qual o pib: ");
scanf ("%f", &carta2.pib);
printf ("Qual a quantidade de pontos turisticos da região: ");
scanf ("%d", &carta2.pontosTuristicos);

// Mostrando os valores da carta 1 e 2 conforme solicitado noe exercicio.
printf("\n\n Carta 1 \n"
       "Estado: %c \n"
       "Código: %s \n"
       "Nome da Cidade: %s \n" 
       "População: %d \n" 
       "Área: %.2f km² \n"  
       "PIB: %.2f bilhões de reais \n" 
       "Número de Pontos Turísticos: %d \n\n", carta1.estado, carta1.codigo,carta1.nomeCidade,carta1.populacao,
                                              carta1.area,carta1.pib,carta1.pontosTuristicos);
printf("Carta 2 \n" 
       "Estado: %c \n"
       "Código: %s \n" 
       "Nome da Cidade: %s \n"
       "População: %d \n"  
       "Área: %.2f km² \n"  
       "PIB: %.2f bilhões de reais \n" 
       "Número de Pontos Turísticos: %d \n ", carta2.estado,carta2.codigo,carta2.nomeCidade,carta2.populacao,
                                              carta2.area,carta2.pib,carta2.pontosTuristicos);
return 0;


}
