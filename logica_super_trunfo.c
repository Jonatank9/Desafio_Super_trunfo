#include <stdio.h>

int main (){
	//Nomeando variaveis das cartas
	char estado1,estado2;
	char cidade1[25],cidade2[25];
	int codigo1,codigo2,turismo1,turismo2;
	unsigned long int populacao1,populacao2;
	float area1,area2,pib1,pib2,densidade1,densidade2,pib_percapita1,pib_percapita2;
	short int resultado1 = 0, resultado2 = 0; //Variáveis para o resultado final

	//Titulo do desafio proposto
	printf("***Desafio Supertrunfo***\n");
	// Carta 1
	printf("\n");
	printf("Preencha abaixo com os dados da primeira carta\n");
	//Formando referências da Carta 1
	//Estado da carta 1
	printf("Digite a letra do estado entre A e H: ");
	scanf(" %c",&estado1);
	if (estado1 >= 'a' && estado1 <= 'h') {
		estado1 = estado1 + ('A' - 'a'); // Converte para maiúscula
	} else {
		if (estado1 < 'A' && estado1 > 'H') {
			printf("Estado inválido! O programa será encerrado.\n"); // Mensagem de erro
			return 1; // Encerra o programa com código de erro
		}
	}
	//Código da carta 1
	printf("Digite o valor do código entre 01 e 04: ");
	scanf("%d",&codigo1);
	if (codigo1 < 1  || codigo1 > 4) {
		printf("Código inválido! O programa será encerrado.\n"); // Mensagem de erro
		return 1; // Encerra o programa com código de erro
	} 
	//Nome da cidade da carta 1
	printf("Digite o nome da cidade: ");
	scanf(" %[^\n]",cidade1);
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
	scanf(" %c",&estado2);
	if (estado2 >= 'a' && estado2 <= 'h') {
		estado2 = estado2 + ('A' - 'a'); // Converte para maiúscula
	} else {
		if (estado2 < 'A' && estado2 > 'H') {
			printf("Estado inválido! O programa será encerrado.\n"); // Mensagem de erro
			return 1; // Encerra o programa com código de erro
		}
	}
	//Código da carta 2
	printf("Digite o valor do código entre 01 e 04: ");
	scanf("%d",&codigo2);
	if (codigo2 < 1  || codigo2 > 4) {
		printf("Código inválido! O programa será encerrado.\n"); // Mensagem de erro
		return 1; // Encerra o programa com código de erro
	}
	//Nome da cidade da carta 2
	printf("Digite o nome da cidade: ");
	scanf(" %[^\n]",cidade2);
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
	printf("Estado: %c\n",estado1);
	printf("Código: %c%.2d\n",estado1,codigo1);
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
	printf("Estado: %c\n",estado2);
	printf("Código: %c%.2d\n",estado2,codigo2);
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
	//População
	if (populacao1 > populacao2) {
		resultado1++;
		printf("População: Carta 1 venceu!\n");
	} else {
		if (populacao1 < populacao2) {
			resultado2++;
			printf("População: Carta 2 venceu!\n");
		} else {
			printf("População: Empate!\n");
		}
	}
	//Área
	if (area1 > area2) {
		resultado1++;
		printf("Área: Carta 1 venceu!\n");
	} else {
		if (area1 < area2) {
			resultado2++;
			printf("Área: Carta 2 venceu!\n");
		} else {
			printf("Área: Empate!\n");
		}
	}
	//PIB
	if (pib1 > pib2) {
		resultado1++;
		printf("PIB: Carta 1 venceu!\n");
	} else {
		if (pib1 < pib2) {
			resultado2++;
			printf("PIB: Carta 2 venceu!\n");
		} else {
			printf("PIB: Empate!\n");
		}
	}
	//Número de pontos turísticos
	if (turismo1 > turismo2) {
		resultado1++;
		printf("Número de pontos turísticos: Carta 1 venceu!\n");
	} else {
		if (turismo1 < turismo2) {
			resultado2++;
			printf("Número de pontos turísticos: Carta 2 venceu!\n");
		} else {
			printf("Número de pontos turísticos: Empate!\n");
		}
	}
	//Densidade demográfica (inverso)
	if (inverso_densidade1 > inverso_densidade2) {
		resultado1++;
		printf("Densidade demográfica: Carta 1 venceu!\n");
	} else {
		if (inverso_densidade1 < inverso_densidade2) {
			resultado2++;
			printf("Densidade demográfica: Carta 2 venceu!\n");
		} else {
			printf("Densidade demográfica: Empate!\n");
		}
	}
	//PIB per capita
	if (pib_percapita1 > pib_percapita2) {
		resultado1++;
		printf("PIB per capita: Carta 1 venceu!\n");
	} else {
		if (pib_percapita1 < pib_percapita2) {
			resultado2++;
			printf("PIB per capita: Carta 2 venceu!\n");
		} else {
			printf("PIB per capita: Empate!\n");
		}
	}
	//Superpoder
	if (superpoder1 > superpoder2) {
		resultado1++;
		printf("Superpoder: Carta 1 venceu!\n");
	} else {
		if (superpoder1 < superpoder2) {
			resultado2++;
			printf("Superpoder: Carta 2 venceu!\n");
		} else {
			printf("Superpoder: Empate!\n");
		}
	}
	printf("A carta 1 venceu %d categorias.\n",resultado1);
	printf("A carta 2 venceu %d categorias.\n",resultado2);
	if (resultado1 > resultado2) {
		printf("A carta 1 é a grande vencedora!\n");
	} else {
		if (resultado1 < resultado2) {
			printf("A carta 2 é a grande vencedora!\n");
		} else {
			printf("As cartas empataram!\n");
		}
	}
	//Finalização da comparação entre as cartas
	//Finalização do programa
	return 0;
	
}