#include <stdio.h>

int main(){

 //aqui vamos declarar as variaveis para armazenar as informacoes


    //para comparar as cartas no fim, achei melhor criar variaveis diferentes para a carta 1 e carta 2. Pois acho que nao seja possivel comparar dois valores armazenados em uma mesma variavel.

    //variaveis carta 1
    char estado1 [50];
    char codigo1 [50];
    char cidade1 [50];

    int populacao1;
    int turistico1;

    float area1;
    float pib1;
    float densidade1; 
    float percapita1;
    float poder1;

    //variaveis carta 2

    char estado2 [50];
    char codigo2 [50];
    char cidade2 [50];

    int populacao2;
    int turistico2;

    float area2;
    float pib2;
    float densidade2; 
    float percapita2;
    float poder2;


    /*aqui o usuario vai digitar informacoes detalhadas sobre cada cidade que esta representada na carta  */

    printf("Digite uma letra de A a H que representa um dos 8 estados do brasil: \n");
    scanf("%s", &estado1);

    printf("Agora digite a letra do estado em seguida de um numero de 01 a 04 para ser o codigo da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite aqui o nome da cidade do estado escolhido: \n");
    scanf("%s", &cidade1);

    printf("Qual o numero de habtantes de %s: \n", cidade1);
    scanf("%d", &populacao1);

   printf("Qual a area em km de %s: \n", cidade1);
   scanf("%f", &area1);

   printf("Digite o PIB bruto da cidade: \n");
   scanf("%f", &pib1);

   printf("Quantos pontos turisticos tem a sua cidade: \n");
   scanf("%d", &turistico1);

   /*apos cadatrar as informacoes, o terminal vai transmitir na tela todas as informacoes digitadas*/


   //nao coloquei densidade populacional por que nao entendi o que e "densudade populacional invertida para comparacao"

    poder1 = populacao1 + area1 + pib1 + turistico1 + percapita1;

    percapita1 = (float) populacao1 / pib1;
    densidade1 = (float) populacao1 / area1;
   

   printf("\n"); 
   printf("-CARTA 1- \n");
   printf("ESTADO: %s \n", estado1);
   printf("CODIGO: %s%s \n", estado1, codigo1);
   printf("NOME DA CIDADE: %s \n", cidade1);
   printf("POPULACAO: %d \n", populacao1);
   printf("AREA: %.2f \n", area1);
   printf("PIB: %.2f bi \n", pib1);
   printf("NUMERO DE PONTOS TURISTICOS: %d\n", turistico1);
   printf("PIB PER CAPITA: %.2f\n", percapita1);
   printf("DENSIDADE POPULACIONAL: %.2f\n", densidade1);
   printf("SUPER PODER: %.1f\n", poder1);

   printf("\n");

    /*neste ponto iniciaremos o cadastramento da segunda carta do super trunfo! */

   printf("-AGORA VAMOS CADASTRAR A SEGUNDA CARTA- \n");

    printf("\n");

    printf("Digite uma letra de A a H que representa um dos 8 estados do brasil: \n");
    scanf("%s", &estado2);

    printf("Agora digite a letra do estado em seguida de um numero de 01 a 04 para ser o codigo da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite aqui o nome da cidade do estado escolhido: \n");
    scanf("%s", &cidade2);

    printf("Qual o numero de habtantes de %s: \n", cidade2);
    scanf("%d", &populacao2);

   printf("Qual a area em km de %s: \n", cidade2);
   scanf("%f", &area2);

   printf("Digite o PIB bruto da cidade: \n");
   scanf("%f", &pib2);

   printf("Quantos pontos turisticos tem a sua cidade: \n");
   scanf("%d", &turistico2);
 
   /*em seguida a apresentacao das informacoes*/

    poder2 = populacao2 + area2 + pib2 + turistico2 + percapita2;

    percapita2 = (float) populacao2 / pib2;
    densidade2 = (float) populacao2 / area2;


   printf("\n"); 
   printf("-CARTA 2- \n");
   printf("ESTADO: %s \n", estado2);
   printf("CODIGO: %s%s \n", estado2, codigo2);
   printf("NOME DA CIDADE: %s \n", cidade2);
   printf("POPULACAO: %d \n", populacao2);
   printf("AREA: %.2f \n",area2);
   printf("PIB: %.2f bi \n", pib2);
   printf("NUMERO DE PONTOS TURISTICOS: %d\n", turistico2);
   printf("PIB PER CAPITA: %.2f\n", percapita2);
   printf("DENSIDADE POPULACIONAL: %.2f\n", densidade2);
   printf("SUPER PODER: %f.2\n", poder2);

   printf("\n");

    if (poder1 > poder2)
    {
        printf("Parabens %s ganhou com poder de %.1f!!!", cidade1, poder1);
    }else{
         printf("Parabens %s ganhou com poder de %.1f!!!", cidade2, poder2);
    }
    









}
