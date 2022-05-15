/* * Autor: Andriks Imanol Ruiz M�rtinez, Realizado: 19/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programaci�n Estructrada
Ciclo: 01/2022

Este es un programa de ciclos en Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:
 
    -Variables enteras y flotantes
    -rintf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librer�as
    -Ciclos
    -Contador
    -Comentarios para la documentaci�n interna del programa
*/
#include<stdio.h>
int main() {
	//Delcaraci�n de variables
	float  nota, media=0, suma=0;
	int  notes, i=1;
	//Proceso
	printf("Introduce la cantidad de notas: ");
	scanf("%d", &notes);
	while(i<=notes) { //Ciclo
		printf("Introduce una nota %d: \n", i);
		scanf("%f", &nota);
		suma=suma+nota;
		i++;
	}
	media=suma/notes;
	//Salida
	printf("La media de la nota es %.2f", media);	
	return 0;	
}
