#include <stdio.h>

int main() {

    char cidade1[20], estado1[20], codigo1[20];
    char cidade2[20], estado2[20], codigo2[20];

    float area1, PIB1, densidade1, PIBpercapita1, superPoder1;
    float area2, PIB2, densidade2, PIBpercapita2, superPoder2;

    int pontos_turisticos1, pontos_turisticos2;
    int opcao;

    unsigned long int populacao1, populacao2;

    printf("    CARTA 1     \n\n");  

    printf("Estado:");
    scanf("%s", estado1);
    
    printf("Codigo:");
    scanf("%s", codigo1);
    getchar();
 
    printf("Nome da Cidade:");
    fgets(cidade1, 20, stdin);

    printf("Populacao:");
    scanf("%lu", &populacao1);
    
    printf("Area:");
    scanf("%f", &area1);
    
    printf("PIB:");
    scanf("%f", &PIB1);
    
    printf("Pontos Turisticos:");
    scanf("%d", &pontos_turisticos1);
    
    densidade1 = populacao1 / area1;
    PIBpercapita1 = PIB1 / populacao1;

    printf("Densidade Populacional: %f Hab/KM2\n", densidade1);
    printf("PIB per Capita: %f reais\n", PIBpercapita1);


    superPoder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + PIBpercapita1 + (1 / densidade1);
    printf("***Super Poder: %f\n", superPoder1);

    printf("\n\n    CARTA 2     \n\n"); // carta 2

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);
    getchar(); 

    printf("Nome da Cidade: ");
    fgets(cidade2, 20, stdin);

    printf("Populacao: ");
    scanf("%lu", &populacao2);
    

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;

    printf("Densidade Populacional: %f Hab/KM2\n", densidade2);
    printf("PIB per Capita: %f reais\n", PIBpercapita2);

    superPoder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + PIBpercapita2 + (1 / densidade2);

    printf("***Super Poder: %f\n", superPoder2);


    printf("\n    MENU    \n");
      printf("1 - Populacao\n");
      printf("2 - Area\n");
      printf("3 - PIB\n");
      printf("4 - Pontos Turisticos\n");
      printf("5 - Densidade Demografica\n");
      printf("6 - PIB per Capita\n");
      printf("7 - Super Poder\n");

    printf("Escolha um atributo: ");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:

    printf("\nComparacao por Populacao\n");

       printf("%s: %lu\n", cidade1, populacao1);
       printf("%s: %lu\n", cidade2, populacao2);

    if(populacao1 > populacao2){
        printf("Carta 1 venceu!\n");
    }
    else if(populacao2 > populacao1){
        printf("Carta 2 venceu!\n");
    }
    else{
            printf("Empate total!\n");
    }
    break;

    case 2:

    printf("\nComparacao por Area\n");

       printf("%s: %.3f\n", cidade1, area1);
       printf("%s: %.3f\n", cidade2, area2);

    if(area1 > area2){
        printf("Carta 1 venceu!\n");
    }
    else if(area2 > area1){
        printf("Carta 2 venceu!\n");
    }
    else{
        printf("Empate!\n");
    }
    break;

    case 3:

    printf("\nComparacao por PIB\n");

       printf("%s: %.3f\n", cidade1, PIB1);
       printf("%s: %.3f\n", cidade2, PIB2);
   
     if(PIB1 > PIB2){
        printf("Carta 1 venceu!\n");

     }else if(PIB2 > PIB1){
        printf("Carta 2 venceu!\n");
     }
     else{
        printf("Empate!\n");
     }
      break;

     case 4:

       printf("\nComparacao por Pontos Turisticos\n");
       
          printf("%s: %d\n", cidade1, pontos_turisticos1);
          printf("%s: %d\n", cidade2, pontos_turisticos2);

       if (pontos_turisticos1 > pontos_turisticos2){
          printf("Carta 1 venceu!\n");

       }else if(pontos_turisticos2 > pontos_turisticos1){
          printf("Carta 2 venceu!\n");
        }
        else{
           printf("Empate!\n");
        }
        break;

        case 5:
         
        printf("\nComparacao por Densidade Demografica\n");
       
          printf("%s: %.3f\n", cidade1, densidade1);
          printf("%s: %.3f\n", cidade2, densidade2);

       if (densidade1 < densidade2){
          printf("Carta 1 venceu!\n");

       }else if(densidade2 < densidade1){
          printf("Carta 2 venceu!\n");
        }
        else{ 
           printf("Empate!\n");
       }
       break;

       default:
        printf("Opcao invalida!\n");
        break;

    }
}
