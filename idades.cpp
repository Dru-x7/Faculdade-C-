/*
	Name: MedirAlturas.ccp
	Author: Otavio Augusto
	Date: 07/10/25 09:38
	Description: Programa para ler a idade de 7 pessoas e calcular a media delas
*/

# include <stdio.h>

main()
{
	int idade, somaIdades, cont;
	float media;
	
	idade = somaIdades = cont = 0;
	media = 0.0;
	
	do
	{
		printf("Digite idade: ");
		scanf("%d", &idade);
		somaIdades = somaIdades + idade; //Acumulativa
		cont++;
	}while(cont < 7);
	media = somaIdades/cont;
	printf("A media das idades e: %.3f", media);
	
	
}// fim do programa
