/*
	Name: Matriz.cpp
	Author: Otavio Augusto
	Date: 04/11/25 10:56
	Description: Lgoritmo para fazer a carga em uma matriz quadrada de ordem 3
*/
#include <stdio.h>
main()
{
	int mat [3][3];
	int i, j;
	int ordem = 3;
	
	puts("Carga na Matriz 3x3:\n ");
	i = 0; //índce da linha
	j = 0; //índice da coluna
	
	do
	{
		do
		{
			printf("[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
			j = j + 1;	
		}while(j < 3);
		
	i = i + 1;
	j = 0;		
	}while(i < 3);
	
	puts("\nMatriz carregada!!!");
	puts("\nConteudo da Matriz");
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			printf("\t%d", mat[i][j]);
	puts("\n");		
	}
	
	puts("Elementos da Diagonal Principal (DP): \n");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i == j)
				printf("%d,", mat[i][j]);
				
	// Diagonal Secunária
	puts("\nElementos da Diagonal Secundaria (DS): \n");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i + j == ordem - 1)
				printf("%d,", mat[i][j]);
				
	// Acima da DP
	puts("\nElementos acima da Diagonal Principal (DP) \n");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i < j)
				printf("%d,", mat[i][j]);
				
	// Abaixo da DP
	puts("\nElementos abaixo da Diagonal Principal (DP): \n");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i > j)
				printf("%d,", mat[i][j]);
				
	// Acima da DS
	puts("\nElementos acima da Diagonal Secundaria (DS): \n");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i + j < ordem - 1)
				printf("%d,", mat[i][j]);
				
	// Abaixo de DS
	puts("\nElementos abaixo da Diagonal Secundaria (DS): \n");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i + j > ordem - 1)
				printf("%d,", mat[i][j]);
} // Fim do programa

