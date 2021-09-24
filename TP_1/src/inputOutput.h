/*
 * inputOutput.h
 *
 *  Created on: 22 Sept 2021
 *      Author: Francisco
 */

#ifndef INPUTOUTPUT_H_
#define INPUTOUTPUT_H_
#include <stdio.h>
#include <stdlib.h>

int menu(float A , float B ,int iniciacionA,int iniciacionB);
float tomarFloat(char mensaje[]);
void salida(float resta, float suma ,float division,float producto, long long int factorialA,long long int factorialB,int banderaFactorialA,int  banderaFactorialB,int banderaTres,float B );
void errorFactorial(char caracter,int max);
int pedirEntero(char* mensaje,int max, int min);
#endif /* INPUTOUTPUT_H_ */
