#include <stdio.h>
#include <stdlib.h>



int main() {
	
int opcao;
	
	printf("1- verde \n");
	printf("2- vermelho \n");
	printf("3- azul \n");
	printf("4- amarelo \n");
	printf("Escolha uma opcao entre 1 e 4 \n");
	scanf("%d", &opcao);
	
	if(opcao==1)
	{
		printf("Imprime verde \n");
	
	}
	else if(opcao==2)
	{
		printf("Imprimir vermelho \n");
	}
	else if(opcao==3)
	{
		printf(" Imprimir azul \n");
	}
	else if(opcao==4)
	{
		printf("Imprimir amarelo \n");
	}
	else
	{
		printf("Opcao invalida \n");
	}
	
	
	return 0;
}