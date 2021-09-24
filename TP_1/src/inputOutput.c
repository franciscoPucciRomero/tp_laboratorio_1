/*
 * inputOutput.c
 *
 *  Created on: 22 Sept 2021
 *      Author: Francisco
 */

#include "inputOutput.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * @fn int menu(float, float, int, int)
 * @brief menu de opciones
 *
 * @param A valor A si ya esta iniciada se muestra
 * @param B valor B si ya esra iniciada se muestra
 * @param banderaA verifica si ya se inicio A
 * @param banderaB verifica si ya se inicio B
 * @return devuelde eleccion usuario
 */
int menu(float A, float B, int banderaA, int banderaB)
{

	int eleccionMenu;
	printf("\nMENU:   ");
	printf("\n Ingrese: 1 para asignar valor a A.");
	if(banderaA!=0)
	{
		printf("(A= %.3f)", A);
	}
	else
	{
		printf("(A= x)");
	}
	printf("\n Ingrese: 2 para asignar valor a B.");
	if (banderaB!=0)
	{
		printf("(B= %.3f)", B);
	}
	else
	{
		printf("(B= y)");
	}
	printf("\n Ingrese: 3 para realizar las operaciones. \n Ingrese: 4 para informar resultados. \n Ingrese: 5 para salir.\n");
	fflush(stdin);
	eleccionMenu=pedirEntero("ingrese un numero entre 1 y 5",5,1);
	return eleccionMenu;
}
/**
 * @fn int pedirEntero(int*, int, int)
 * @brief pide entero y valida que este dentro de los valores pedidos
 *
 * @param mensaje mensaje a mostrar al pedir numero de haber error
 * @param max maximo aceptado
 * @param min minimo aceptado
 * @return deuvuelce eleccion
 */
int pedirEntero(char* mensaje,int max, int min)
{
	int aux=0;
		int numeroIngresado;

		//printf("\n %s",mensaje);
		fflush(stdin);
		aux=scanf("%d",&numeroIngresado);

		while(aux==0 ||numeroIngresado<min ||numeroIngresado>max)
		{
		printf("\nERROR \n %s",mensaje);
		fflush(stdin);
		aux=scanf("%d",&numeroIngresado);
		}
		return numeroIngresado;

}
/**
 * @fn float tomarFloat(char[])
 * @brief pide un float y valida que sea un numero
 *
 * @param mensaje mensaje de error
 * @return devuelve numero ingresado por usuario, pedira numero hasta un ingreso valido
 */
float tomarFloat(char mensaje[])
{

	int aux=0;
	float numeroIngresado;

	printf("\n %s",mensaje);
	fflush(stdin);
	aux=scanf("%f",&numeroIngresado);

	while(aux==0)
	{
	printf("\nERROR \n%s",mensaje);
	fflush(stdin);
	aux=scanf("%f",&numeroIngresado);
	}
	return numeroIngresado;


}
/**
 * @fn void salida(float, float, float, float, long, long, int, int, int, float)
 * @brief toma los resultados de las ecuaciones y los muestra en consola en caso de que se hallan podido ejecutar
 *
 * @param resta
 * @param suma
 * @param division
 * @param producto
 * @param factorialA
 * @param factorialB
 * @param banderaFactorialA
 * @param banderaFactorialB
 * @param banderaTres
 * @param B
 */
void salida(float resta, float suma ,float division,float producto, long long int factorialA,long long int factorialB,int banderaFactorialA,int  banderaFactorialB,int banderaTres,float B )
{
	 if(banderaTres==1)//bandera tres evalua si se calcularon las operaciones desde el ultimo ingreso de datos.
		{
			printf("\n\nRESULTADOS: ");
			printf("\n El resultado de A+B es: %.3f",suma);
			printf("\n El resultado de A-B es: %.3f",resta);
			if(B!=0)
				{
				 printf("\n El resultado de A/B es: %.3f",division);
				}
			else
				{
					printf("\n No se realizo la division ya que no es posible dividir por 0 ");
				}
			 printf("\n El resultado de A*B es: %.3f",producto);

			 if(banderaFactorialA==1)
				{
				printf("\n El factorial de A es:  %I64d ",factorialA);
				}
			 else
				 {
				 	 errorFactorial('A' ,20);
				 }
			 if(banderaFactorialB==1)
				 {
					printf("\n El factorial de B es:  %I64d \n",factorialB);
				 }
			 else
				 {
				 	 errorFactorial('B',20);
				 }
			}
		else
		{
			printf("\nEs necesario calcular las ecuaciones antes de poder informarlas, para ello preciones 3 en el menu.\n");
		}
}
/**
 * @fn void errorFactorial(char, int)
 * @brief mesaje de error en caso de que no sea posible calcular el factorial de un numero
 *
 * @param caracter
 * @param max
 */
void errorFactorial(char caracter,int max)
{
	printf("\n No se pudo calcular el factorial de %c por alguno de los sigientes motivos: es mayor a %d, menor a 0  o no es un numero entero ",caracter,max);
}
