/*
 * ecuaciones.c
 *
 *  Created on: 22 Sept 2021
 *      Author: Francisco
 */
#include <stdio.h>
#include <stdlib.h>
#include "ecuaciones.h"
/**
 * @fn float sumar(float, float)
 * @brief suma dos floats
 *
 * @param A
 * @param B
 * @return
 */
float sumar(float A, float B)
{
	float total;
	total=A+B;
	return total;
}
/**
 * @fn float restar(float, float)
 * @brief resta dos floats
 *
 * @param A
 * @param B
 * @return
 */
float restar(float A,float B)
{
	float total;
	total=A-B;
	return total;
}
/**
 * @fn float dividir(float, float)
 * @brief divide dos floats
 *
 * @param A
 * @param B
 * @return
 */
float dividir(float A,float B)
{
	float total;
	total=A/B;
	return total;
}
/**
 * @fn float multiplicar(float, float)
 * @brief multiplica dos floats
 *
 * @param A
 * @param B
 * @return
 */
float multiplicar(float A,float B)
{
	float total;
	total=A*B;
	return total;
}
/**
 * @fn long long int factorizar(int)
 * @brief calcula el factorial del numero que se le pase devuelde el factorial , recursividad
 *
 * @param numero
 * @return
 */
 long long int  factorizar (int numero) //con recursividad
{
	 /*la recursividad no es una herramienta recomendada fue utilizada en este
	   trabajo para demostrar su uso hay mejores manera de resolver este problema
	    como se demuesta al final de la funcion*/
	long long int total;

	if (numero==0)
	{
		total=1;
	}
	else
	{
		total=numero*factorizar(numero-1);
	}
	return total;
}
