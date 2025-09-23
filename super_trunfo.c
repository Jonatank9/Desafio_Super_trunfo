#include <stdio.h>

int main (){
	//Nomeando variaveis das cartas
	char estado1[2],estado2[2];
	char cidade1[25],cidade2[25];
	int codigo1,codigo2,turismo1,turismo2;
	unsigned long int populacao1,populacao2;
	float area1,area2,pib1,pib2,densidade1,densidade2,pib_percapita1,pib_percapita2;
	
	//Titulo do desafio proposto
	printf("***Desafio Supertrunfo***\n");
	// Carta 1
	printf("\n");
	printf("Preencha abaixo com os dados da primeira carta\n");
	//Formando referências da Carta 1
	//Estado da carta 1
	printf("Digite a letra do estado entre A e H: ");
	scanf("%s",estado1);
	//Código da carta 1
	printf("Digite o valor do código entre 01 e 04: ");
	scanf("%d",&codigo1);
	//Nome da cidade da carta 1
	printf("Digite o nome da cidade: ");
	scanf(" %s",cidade1);
	//População da carta 1
	printf("Digite a quantidade da população: ");
	scanf("%lu",&populacao1);
	//Área da carta 1
	printf("Digite o valor da área em km²: ");
	scanf("%f",&area1);
	//PIB da carta 1
	printf("Digite o valor do PIB em bilhões de reais: ");
	scanf("%f",&pib1);
	//Número de pontos turísticos da carta 1
	printf("Digite o número de pontos turísticos: ");
	scanf("%d",&turismo1);
	//Cálculo da densidade demográfica e PIB per capita da carta 1
	densidade1 = (float) populacao1/area1;
	pib_percapita1 = (float) pib1*1000000000/populacao1;
	
	// Carta 2
	printf("\n");
	printf("Preencha abaixo com os dados da segunda carta\n");
	//Formando referências da Carta 2
	//Estado da carta 2
	printf("Digite a letra do estado entre A e H: ");
	scanf("%s",estado2);
	//Código da carta 2
	printf("Digite o valor do código entre 01 e 04: ");
	scanf("%d",&codigo2);
	//Nome da cidade da carta 2
	printf("Digite o nome da cidade: ");
	scanf(" %s",cidade2);
	//População da carta 2
	printf("Digite a quantidade da população: ");
	scanf("%lu",&populacao2);
	//Área da carta 2
	printf("Digite o valor da área em km²: ");
	scanf("%f",&area2);
	//PIB da carta 2
	printf("Digite o valor do PIB em bilhões de reais: ");
	scanf("%f",&pib2);
	//Número de pontos turísticos da carta 2
	printf("Digite o número de pontos turísticos: ");
	scanf("%d",&turismo2);
	//Cálculo da densidade demográfica e PIB per capita da carta 2
	densidade2 = (float) populacao2/area2;
	pib_percapita2 = (float) pib2*1000000000/populacao2;
	
	//Varáveis para o cálculo do superpoder
	short int inverso1 = 1, inverso2 = 1; //Variáveis para o cálculo do inverso da densidade demográfica
	//Cálculo do superpoder das cartas
	double inverso_densidade1 = inverso1 / densidade1;
	double inverso_densidade2 = inverso2 / densidade2;
	double superpoder1 = (double) populacao1 + (double) area1 + (double) pib1 + (double) turismo1 + 
		(double) inverso_densidade1 + (double) pib_percapita1;
	double superpoder2 = (double) populacao2 + (double) area2 + (double) pib2 + (double) turismo2 + 
		(double) inverso_densidade2 + (double) pib_percapita2;

	//Carta 1

	printf("\n");

	printf("Carta 1:\n");
	printf("Estado: %s\n",estado1);
	printf("Código: %s%.2d\n",estado1,codigo1);
	printf("Nome da cidade: %s\n",cidade1);
	printf("População: %lu\n",populacao1);
	printf("Área: %.2f km²\n",area1);
	printf("PIB: %.2f bilhões de reais\n",pib1);
	printf("Número de pontos turísticos: %d\n",turismo1);
	printf("Densidade demográfica: %.2f hab/km²\n",densidade1);
	printf("PIB per capita: %.2f reais\n",pib_percapita1);
	printf("O superpoder: %.2f\n",superpoder1);
	//Finalização do cadastro da carta 1
	//Carta 2

	printf("\n");

	printf("Carta 2:\n");
	printf("Estado: %s\n",estado2);
	printf("Código: %s%.2d\n",estado2,codigo2);
	printf("Nome da cidade: %s\n",cidade2);
	printf("População: %lu\n",populacao2);
	printf("Área: %.2f km²\n",area2);
	printf("PIB: %.2f bilhões de reais\n",pib2);
	printf("Número de pontos turísticos: %d\n",turismo2);
	printf("Densidade demográfica: %.2f hab/km²\n",densidade2);
	printf("PIB per capita: %.2f reais\n",pib_percapita2);
	//Cálculo do superpoder da carta 2

	printf("O superpoder: %.2f\n",superpoder2);
	//Finalização do cadastro da carta 2

	//Comparação entre as cartas
	printf("\n");
	printf("Comparação entre as cartas:\n");
	printf("Legendas: 1 = Informação VERDADEIRA; 0 = Informação INCORRETA\n");
	printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2)); // 1 se verdade, 0 se falso
	printf("Área: Carta 1 venceu (%d)\n", (area1 > area2)); // 1 se verdade, 0 se falso
	printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2)); // 1 se verdade, 0 se falso
	printf("Número de pontos turísticos: Carta 1 venceu (%d)\n", (turismo1 > turismo2)); // 1 se verdade, 0 se falso
	printf("Densidade demográfica: Carta 1 venceu (%d)\n", (inverso_densidade1 > inverso_densidade2)); // 1 se verdade, 0 se falso
	printf("PIB per capita: Carta 1 venceu (%d)\n", (pib_percapita1 > pib_percapita2)); // 1 se verdade, 0 se falso
	printf("Superpoder: Carta 1 venceu (%d)\n", (superpoder1 > superpoder2)); // 1 se verdade, 0 se falso
	//Finalização da comparação entre as cartas
	//Finalização do programa
	return 0;
	
}