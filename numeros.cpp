/*
	Name: leitor10.cpp
	Author: Otavio Augusto 
	Date: 07/10/25 10:48
	Description: Programa que le 10 numeros e aponta o maior entre eles
*/
# include <stdio.h>

main()
{
	int numero, maior, menor;
	int cont = 0;
	
	maior = numero;
	menor = numero;
	
		while (cont < 10)
	{
		printf("Digite um numero: "); scanf("%d", &numero);
		

			
			if ( numero > maior)
				maior = numero;
				
			if (numero < menor)
				menor = numero;
				
		cont++;
	}
	
	printf("\nO maior numero e: %d", maior);
	printf("\nO menor numero e: %d", menor);
}// fim do programa

