#include <stdio.h>
#include <time.h>
#include <stdlib.h>   

int main() {

    char cidade1[20], estado1[20], codigo1[20];
    char cidade2[20], estado2[20], codigo2[20];

    float area1, PIB1, densidade1, PIBpercapita1, superPoder1;
    float area2, PIB2, densidade2, PIBpercapita2, superPoder2;

    float valor1A = 0, valor2A = 0;
    float valor1B = 0, valor2B = 0;
    float soma1 = 0, soma2 = 0;

    int pontos_turisticos1, pontos_turisticos2;
    int opcao1, opcao2;

    unsigned long int populacao1, populacao2;

    printf("              CARTA 1 \n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);
    getchar();

    printf("Nome da Cidade: ");
    fgets(cidade1,20,stdin);

    printf("Populacao: ");
    scanf("%lu",&populacao1);

    printf("Area: ");
    scanf("%f",&area1);

    printf("PIB: ");
    scanf("%f",&PIB1);

    printf("Pontos Turisticos: ");
    scanf("%d",&pontos_turisticos1);

    densidade1 = populacao1 / area1;
    PIBpercapita1 = PIB1 / populacao1;
    superPoder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + PIBpercapita1 + (1/densidade1);

    printf("\n              CARTA 2 \n");

    printf("Estado: ");
    scanf("%s", estado2);
    getchar();

    printf("Codigo: ");
    scanf("%s", codigo2);
    getchar();

    printf("Nome da Cidade: ");
    fgets(cidade2,20,stdin);

    printf("Populacao: ");
    scanf("%lu",&populacao2);

    printf("Area: ");
    scanf("%f",&area2);

    printf("PIB: ");
    scanf("%f",&PIB2);

    printf("Pontos Turisticos: ");
    scanf("%d",&pontos_turisticos2);

    densidade2 = populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;
    superPoder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + PIBpercapita2 + (1/densidade2);

    printf("\n           PRIMEIRO ATRIBUTO\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");

    printf("Escolha: ");
    scanf("%d",&opcao1);

    printf("\n           SEGUNDO ATRIBUTO\n");

    if(opcao1 != 1) printf("1 - Populacao\n");
    if(opcao1 != 2) printf("2 - Area\n");
    if(opcao1 != 3) printf("3 - PIB\n");
    if(opcao1 != 4) printf("4 - Pontos Turisticos\n");
    if(opcao1 != 5) printf("5 - Densidade Demografica\n");
    if(opcao1 != 6) printf("6 - PIB per Capita\n");
    if(opcao1 != 7) printf("7 - Super Poder\n");

    printf("Escolha: ");
    scanf("%d",&opcao2);

    if(opcao1 == opcao2){
        printf("Nao e permitido escolher o mesmo atributo.\n");
        return 0;
    }

    switch(opcao1){

        case 1:
            valor1A = populacao1;
            valor2A = populacao2;
            break;

        case 2:
            valor1A = area1;
            valor2A = area2;
            break;

        case 3:
            valor1A = PIB1;
            valor2A = PIB2;
            break;

        case 4:
            valor1A = pontos_turisticos1;
            valor2A = pontos_turisticos2;
            break;

        case 5:
            valor1A = densidade1;
            valor2A = densidade2;
            break;

        case 6:
            valor1A = PIBpercapita1;
            valor2A = PIBpercapita2;
            break;

        case 7:
            valor1A = superPoder1;
            valor2A = superPoder2;
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // SEGUNDO ATRIBUTO
    switch(opcao2){

        case 1:
            valor1B = populacao1;
            valor2B = populacao2;
            break;

        case 2:
            valor1B = area1;
            valor2B = area2;
            break;

        case 3:
            valor1B = PIB1;
            valor2B = PIB2;
            break;

        case 4:
            valor1B = pontos_turisticos1;
            valor2B = pontos_turisticos2;
            break;

        case 5:
            valor1B = densidade1;
            valor2B = densidade2;
            break;

        case 6:
            valor1B = PIBpercapita1;
            valor2B = PIBpercapita2;
            break;

        case 7:
            valor1B = superPoder1;
            valor2B = superPoder2;
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // Soma dos atributos (tratando a densidade)
    soma1 = 0;
    soma2 = 0;

    if(opcao1 == 5){
        soma1 += 1 / densidade1;
        soma2 += 1 / densidade2;
    }else{
        soma1 += valor1A;
        soma2 += valor2A;
    }

    if(opcao2 == 5){
        soma1 += 1 / densidade1;
        soma2 += 1 / densidade2;
    }else{
        soma1 += valor1B;
        soma2 += valor2B;
    }

    printf("\n            RESULTADO\n");

    printf("Cidade 1: %s", cidade1);
    printf("Cidade 2: %s\n", cidade2);

    printf("Valor do 1º atributo:\n");
    printf("%s: %.2f\n", cidade1, valor1A);
    printf("%s: %.2f\n\n", cidade2, valor2A);

    printf("Valor do 2º atributo:\n");
    printf("%s: %.2f\n", cidade1, valor1B);
    printf("%s: %.2f\n\n", cidade2, valor2B);

    printf("Soma da Carta 1: %.2f\n", soma1);
    printf("Soma da Carta 2: %.2f\n\n", soma2);

    (soma1 > soma2) ?
        printf("Vencedor: Carta 1 (%s)", cidade1) :
        (soma2 > soma1) ?
            printf("Vencedor: Carta 2 (%s)", cidade2) :
            printf("Empate!");

    return 0;
}
  