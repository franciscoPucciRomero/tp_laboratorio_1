/*
TRABAJO PRACTICO
--menu
1. Ingresar 1er operando (A=x)

2. Ingresar 2do operando (B=y)

3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)

4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”

5. Salir

Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)

• Deberán contemplarse los casos de error (división por cero, etc)\\\\\\\\\\\\\\\\\\\/

• Documentar todas las funciones
 */


/*
 * validar datos
 * doxycharm// usar
 * factorizar //chequear
 * long int //tamos// no funca
 * define max
 * guia estilos //?
 * bibliotecas //tamos
 * pedir int menu//validacion datos float A y B y int menu
 *
*/

//agregar bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include "inputOutput.h"
#include "ecuaciones.h"
//mi biblioteca


int main(void) {

	setbuf(stdout, NULL);
	float A;
	float B;
	int eleccionMenu;
	int banderaA=0;
	int banderaB=0;
	int banderaTres=0;
	int banderaFactorialA=0;
	int banderaFactorialB=0;

	float suma;
	float resta;
	float division;
	float producto;
	long long int factorialA;
	long long int factorialB;

	do{
		eleccionMenu=menu(A,B,banderaA,banderaB);//corre menu

		switch(eleccionMenu)//
		{
		case 1 ://pedir A
			A=tomarFloat("ingrese valor de A.");
			if (banderaA==1)
			{
				banderaTres=0;//en caso de que se re-ingrese un dato para asegurarse de ejecutar 3 antes de mostrarlo
				banderaFactorialA=0;//las banderas de factoriales tambien deben ser reiniciadas
			}
			banderaA=1;

			break;
		case 2 ://pedir B
			B=tomarFloat("ingrese valor de B.");
			if(banderaB==1)
			{
				banderaTres=0;//en caso de que se re-ingrese un dato para asegurarse de ejecutar 3 antes de mostrarlo
				banderaFactorialB=0;
			}
			banderaB=1;

			break;
		case 3 ://ecuaciones
			//void salida(float resta, float suma ,float division,float producto, long factorialA,long factorialB,int banderaFactorialA,int  banderaFactorialB);
			if(banderaA==1 && banderaB==1)
			{
				banderaTres=1;
				suma=sumar(A,B);
				resta=restar(A,B);
				if(B!=0)//imposible dividir por 0
				{
					division=dividir(A,B);
				}
				producto=multiplicar(A,B);
				if(A< 21 && A>-1 )
				{
					factorialA=factorizar((int)A);
					banderaFactorialA=1;
				}
				if (B< 21  && B>-1)
				{
					factorialB=factorizar((int)B);
					banderaFactorialB=1;
				}
				printf("\nSE HAN REALIZADO LAS OPERACIONES CORRESPONDIENTES\n");
			}
			else
			{
				printf("\n\n---POR FAVOR ASIGNE UN VALOR A Y B , PUEDE HACERLO SELECCIONANDO 1 Y 2 EN EL MENU.---\n");
			}
			system("pause");
			break;

		case 4 :
			salida( resta ,  suma , division ,  producto ,  factorialA ,  factorialB ,  banderaFactorialA, banderaFactorialB ,  banderaTres , B );
			system("pause");

			break;
		case 5 ://salir//esta linea es necesaria de lo contrario seria tomado como invalido
			break;
		default://ingreso invalido //podria validar desde el menu capaz mas efectivo. EN CASO DE QUE ME FALLE LA DE MENU, char?
			printf("\n \n \n OPCION INVALIDA \n \n \n");
			system("pause");
			break;
		}
	}while(eleccionMenu!=5);

	printf("\n\nGracias vuelva pronto. \n");//despedida ingreso==5
	system("\npause"); //delay para que de vea el mensaje antes de limpiar.
	printf("\n\n\n\n\n\n\n\n");//limpiar consola //ponele

}







