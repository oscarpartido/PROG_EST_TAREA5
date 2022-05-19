/* Autor: Oscar Vivaldi Partido Ramirez, realizado: 06/02/2022			
	tarea 1 programa que calculara el area de una TETRAEDRO REGULAR  
	*/
#include <stdio.h>
#include<math.h>
#include<Cmath>


int main(){
	//declaracion de variables 
	float a, area, Volumen ;

	//entrada de datos
	printf("ingrese el valor del area menor (a):  ");
	scanf("%f", &a);

	//proceso 
	area=sqrt(3)*pow(a,2);
	Volumen=sqrt(2)*pow(a, 2)/12;
	
	//SALIDA
	printf("el area del tetraedro regular    es: %f \nEl volumen es: %f",area, Volumen  );

return 0;
}

