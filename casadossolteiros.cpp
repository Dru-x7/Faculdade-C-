/*
	Name: CasadosSolteiros.cpp
	Author: Otavio Augusto 
	Date: 07/10/25 09:55
	Description: Programa para ler e contabilizar homens e mulheres, solteiros e casados
*/
# include <stdio.h>

main()
{
	char sexo, casado;
	int casadosM, solteirosM, casadosH, solteirosH;
	int cont = 0;
	
	while (cont < 10)
	{
		printf("Sexo (M/F): "); scanf("%c", &sexo);
		printf("Casado? (S/N): "); scanf("%c", &casado);
		
		if (sexo == 'M' || sexo == 'm')// é homem
			if(casado == 'S' || casado == 's')// é casado
				casadosH = casadosH + 1;
				else
					solteirosH = solteirosH + 1;
			else //é mulher
				if(casado == 'S' || casado == 's')// é casada
					casadosM = casadosM +1;
				else
					solteirosM = solteirosM +1;
	cont++;
	
	}// fim do while
	
	printf("\n\nQuantidade de homens casados: %d", casadosH);
	printf("\n\nQuantidade de homens solteiros: %d", solteirosH);
	printf("\n\nQuantidade de mulheres casadas: %d", casadosM);
	printf("\n\nQuantidade de mulheres solteiras: %d", solteirosM);
}// fim do programa

