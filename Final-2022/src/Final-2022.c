/*
 ============================================================================
 Name        : Final-2022.c
 Author      : Monsalbo Lucio
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "controller.h"

int main(void)
{
	setbuf(stdout,NULL);
	int opcion;
	int validacion;

	LinkedList* listaMain = ll_newLinkedList();

	do
	{
		system("cls");

		opcion = controller_Menu();

		switch(opcion)
		{
		case 1:
			validacion = controller_Cargar(listaMain, "Data_Pokemones.csv");
			mostrarMensaje("se cargo correctamente el archivo", "no se pudo cargar", validacion);
			break;


		case 2:
			validacion = controller_ModificarValorDeAtaque(listaMain);
			mostrarMensaje("se modifico correctamente el pokemon", "no se pudo modificar", validacion);
			break;


		case 3:
			validacion = controller_listar(listaMain);
			mostrarMensaje("", "no se pudo listar", validacion);
			break;
		case 4:
			validacion = controller_filtrarPorFuego(listaMain);
			mostrarMensaje("se filtro correctamente, opcion 3 para listar", "no se pudo filtrar", validacion);
			break;
		case 5:
			validacion = controller_filtrarExtragrandesVenenosos(listaMain);
			mostrarMensaje("se filtro correctamente, opcion 3 para listar", "no se pudo filtrar", validacion);
			break;
		case 6:
			break;
		case 7:
			break;
		}
		system("pause");
	}while(opcion != 8);
	return EXIT_SUCCESS;
}
