/*
	Name: tabuada.cpp
	Author: Otavio Augusto 
	Date: 07/10/25 10:30
	Description: Programa poara exibir tabuada
*/
# include <stdio.h>
main()
{
	int num, i;
	num = i = 0;
	
	printf("digite um numero: ");
	scanf("%d", &num);
	
	for(i = 0; i <= 10; i++)
		printf("\n%d x %d = %d",num,i,num*i);
}//Fim do programa

