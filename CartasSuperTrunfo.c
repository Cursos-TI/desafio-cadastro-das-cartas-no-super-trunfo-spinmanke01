#include <stdio.h>

int main(){
  //dados brutos
  int pop1, pop2, pturisticos1, pturisticos2;
  float area1, area2, pib1, pib2;
  // calculáveis
  float pibpercapita1, pibpercapita2, dpopulacional1, dpopulacional2;

printf("===================\n");
printf("SUPER TRUNFO!!\n");
printf("===================\n");

   printf("Rio de Janeiro-RJ\n");
    printf("Código: A01\n");

printf("Aqui você determinará os atributos dessa cidade!\n");
printf("\n");
  printf("Quantas pessoas tem nessa cidade?: ");
scanf("%d", &pop1);
  printf("Qual a Área dessa cidade(km²)? : ");
scanf("%f", &area1);
  printf("Qual o PIB?: ");
scanf("%f", &pib1);
  printf("Quantos pontos turísticos ela tem?: ");
scanf("%d", &pturisticos1);

printf("================================================\n");

  printf("São Paulo-SP\n");
    printf("Código: B01\n");
 printf(" ");
printf("Determine agora os atributos dessa outra cidade!\n");
printf(" ");

  printf("Quantas pessoas tem nessa cidade?: ");
scanf("%d", &pop2);
  printf("Qual a Área dessa cidade(km²)? : ");
scanf("%f", &area2);
  printf("Qual o PIB?: ");
scanf("%f", &pib2);
  printf("Quantos pontos turísticos ela tem?: ");
scanf("%d", &pturisticos2);

//percapita e densidade populacional
pibpercapita1 = (float)(pib1 / pop1);
dpopulacional1 = (float)(pop1 / area1);


printf("==============================================\n");
 printf("Dados: \n");
  printf("Cidade 1:Rio de janeiro-RJ\n");
    printf("Código:A01\n");
       printf("População:%d\n", pop1);
        printf("Área:%.2f km² \n", area1);
         printf("PIB:%.2f\n", pib1);
          printf("Pontos turísticos:%d\n", pturisticos1);
           printf("PIB per capita: %.2f per capita\n", pibpercapita1);
            printf("Densidade populacional: %.2f hab/km²\n ", dpopulacional1);


//percapita e densidade populacional
pibpercapita2 = (float)(pib2 / pop2);
dpopulacional2 = (float)(pop2 / area2);


 printf("==============================================\n");
  printf("Cidade 2:São paulo-SP\n");
   printf("Código:B01\n");
    printf("População:%d\n", pop2);
     printf("Área:%.2fkm²\n", area2);
      printf("PIB:%.2f\n", pib2);
       printf("Pontos turísticos:%d\n", pturisticos2);
        printf("PIB per capita: %.2f per capita\n", pibpercapita2);
         printf("Densidade populacional: %.2fhab/km²\n", dpopulacional2);


return 0;

 }
