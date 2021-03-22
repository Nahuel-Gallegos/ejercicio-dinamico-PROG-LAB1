/*
 ============================================================================
 Name        : hola.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int continuar;

	printf("Desea continuar? 1 para si, 0 para no:");
	scanf("%d",&continuar);

	if(continuar == 1)
	{
		printf("Ingresaste continuar");
	}
	else
	{
		if(continuar==2)
		{
			printf("Ingresaste no");
		}
	}


	return EXIT_SUCCESS;
}
