#include <stdio.h>

struct carta {
char nome [50];
float pib;
int população;
float area;
int pontosturisticos;


};
int main() {

 struct  carta carta1;
 struct  carta carta2;
 

 printf("Digite o nome da cidade: \n");
 scanf("%s", carta1.nome);

 printf("Digite o PIB da cidade: \n");
 scanf("%f", &carta1.pib);

 printf("Digite a população da cidade: \n");
 scanf("%d",&carta1.população);

 printf("Digite a area da cidade: \n");
 scanf("%f", &carta1.area);

 printf("Digite o numero turisticos da cidade: \n");
 scanf("%d",&carta1.pontosturisticos);

 printf("Digite o nome da cidade: \n");
 scanf("%s", carta2.nome);

 printf("Digite o PIB da cidade: \n");
 scanf("%f", &carta2.pib);

 printf("Digite a população da cidade: \n");
 scanf("%d",&carta2.população);

 printf("Digite a area da cidade: \n");
 scanf("%f", &carta2.area);

 printf("Digite o numero turisticos da cidade: \n");
 scanf("%d",&carta2.pontosturisticos);

 printf("\n---- carta----\n");
 printf("cidade:%s\n",carta1.nome);
 printf("PIB:%.2f\n",carta1.pib);
 printf("população:%d\n",carta1.população);
 printf("area:%.2f\n",carta1.area);
 printf("pontosturisticos:%d\n",carta1.pontosturisticos);

 printf("\n---- carta----\n");
 printf("cidade:%s\n",carta2.nome);
 printf("PIB:%.2f\n",carta2.pib);
 printf("população:%d\n",carta2.população);
 printf("area:%.2f\n",carta2.area);
 printf("pontosturisticos:%d\n",carta2.pontosturisticos);

 return 0;
}

