
#include <stdio.h>
#include <stdlib.h>
//setbuf(stdout,NULL);
float dividir (int numeroA, int numeroB, float* pResultado);//firma de la funcion
float multiplicar (int numeroA,int numeroB,float* pResultado);
float restar (int numeroA,int numeroB,float* pResultado);
float sumar (int numeroA,int numeroB,float* pResultado);

int main(void)
{
	setbuf(stdout,NULL);


	int numero1;
	int segundoNumero=0;//CON INT ME INICIALIZA CON 0 Y NO PUEDO PONERLE OTRO VALOR
	char operacion;
	float resultado;

	printf("Ingresa el primer numero: \n");
	fflush(stdin);
	scanf("%d",&numero1);
	printf("Ingresa el segundo numero: \n");
	fflush(stdin);
	scanf("%i",&segundoNumero);
	printf("Ingresa la operacion que realizarás: \n");
	fflush(stdin);
	scanf("%s",&operacion);

	printf("%i",segundoNumero);
	switch(operacion)
	{
		case '/':
			dividir(numero1,segundoNumero,&resultado);
			break;
		case '*':
			multiplicar(numero1,segundoNumero,&resultado);
			break;
		case '-':
			restar(numero1,segundoNumero,&resultado);
			break;
		case '+':
			sumar(numero1,segundoNumero,&resultado);
			break;
	}

	if(operacion=='/')
	{
		if(dividir(numero1,segundoNumero,&resultado)==0)
		{
			printf("El resultado de la operacion %s es: %.2f",&operacion,resultado);
		}
		else
		{
			printf("Error, no se puede dividir por 0");
		}
	}
	else
	{
		printf("El resultado de la operacion %s es: %.2f",&operacion,resultado);
	}


	return EXIT_SUCCESS;
}



	float dividir (int numeroA, int numeroB, float* pResultado)
	{

		if(numeroB==0)
		{
			return -1;
		}
		else
		{
			*pResultado = (float)numeroA/numeroB;

			return 0;
		}
	}

	float multiplicar (int numeroA,int numeroB,float* pResultado)
	{
		*pResultado=(float)numeroA*numeroB;
		printf("numeroA: %i, numeroB %i, resultado %f",numeroA,numeroB,*pResultado);
		return 0;
	}

	float restar (int numeroA,int numeroB,float* pResultado)
	{
		*pResultado=(float)numeroA-numeroB;

		return 0;
	}

	float sumar (int numeroA,int numeroB,float* pResultado)
	{
		*pResultado=(float)numeroA+numeroB;

		return 0;
	}


