#include <stdio.h>

int main() {

    char cidade1[20], estado1[20], codigo1[20];
    char cidade2[20], estado2[20], codigo2[20];

    float area1, PIB1, densidade1, PIBpercapita1, superPoder1;
    float area2, PIB2, densidade2, PIBpercapita2, superPoder2;

    int pontos_turisticos1, pontos_turisticos2;

    unsigned long int populacao1, populacao2;

    printf("    CARTA 1     \n\n");  //carta 1


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

    printf("Densidade Populacional: %f Hab/KM2 \n", densidade1);
    printf("PIB per Capita: %f reais \n", PIBpercapita1);


    superPoder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + PIBpercapita1 + (1 / densidade1);
    printf(" Super Poder: %f \n", superPoder1);

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

    printf("Densidade Populacional: %f Hab/KM2 \n", densidade2); 
    printf("PIB per Capita: %f reais \n", PIBpercapita2);

    superPoder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + PIBpercapita2 + (1 / densidade2);

    printf(" Super Poder: %f \n", superPoder2);


    // COMPARACAO DE CARTAS

printf("\n    COMPARACAO DE CARTAS \n\n");

       if(populacao1 > populacao2){
              printf("populacao: carta1 venceu\n");
       }else{
              printf("populacao: carta2 venceu\n");
       }


       if(area1 > area2){
              printf("area: carta1 venceu\n");
       }else{
              printf("area: carta2 venceu\n");
       }


       if(PIB1 > PIB2){
              printf("PIB: carta1 venceu\n");
       }else{
              printf("PIB: carta2 venceu\n");
       }


       if(pontos_turisticos1 > pontos_turisticos2){
              printf("pontos_turisticos: carta1 venceu\n");
       }else{
              printf("pontos_turisticos: carta2 venceu\n");
       }

// menor densidade vence
       if(densidade1 < densidade2){
              printf("desensidade: carta1 venceu\n");
       }else{
              printf("desensidade: carta2 venceu\n");
       }


       if(PIBpercapita1 > PIBpercapita2){
              printf("PIBpercapita: carta1 venceu\n");
       }else{
              printf("PIBpercapita: carta2 venceu\n");
       }

        if(superPoder1 > superPoder2){
              printf("superPoder: carta1 venceu\n");
       }else{
              printf("superPoder: carta2 venceu\n");
       }

       

    return 0;
}