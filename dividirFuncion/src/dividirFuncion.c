/*
 ============================================================================
 Name        : dividirFuncion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float dividir (int numeroA, int numeroB, float* pResultado)

int main(void) {


	int resultado;

	if(sumar(1,3,&resultado)==0)
	{
		printfO("El valor de la division es %.2f",resultado);
	}
	else
	{
		printf("Error");
	}

	return EXIT_SUCCESS;
}


float dividir (int numeroA, int numeroB, float* pResultado)
{
	*pResultador = numeroA/numeroB;

	if(numeroB==0)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
