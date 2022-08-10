#include "Controller.h"

int controller_Menu(void)
{
	int retorno = -1;

	getInt("			POKEMENU\n\n"
			"1- Carga de Archivos\n"
			"2- Modificar Valor de ataque\n"
			"3- Imprimir Pokemones\n"
			"4- Filtrar por tipo fuego\n"
			"5- Filtrar extra grande de tipo veneno\n"
			"6- Mapear ataque cargado\n"
			"7- Batalla pokemon\n"
			"8- SALIR", 1, 8, &retorno);

	return retorno;
}

int controller_Cargar(LinkedList* listaMain, char* path)
{
	FILE* pArchivo = NULL;
	int retorno = -1;

	if(ll_isEmpty(listaMain) == 1 && path != NULL)
	{
		pArchivo = fopen(path, "r");
		if(pArchivo != NULL)
		{
			retorno = parser_CargarCSV(listaMain, pArchivo);
		}
		fclose(pArchivo);
	}

	return retorno;
}

int controller_ModificarValorDeAtaque(LinkedList* listaMain)
{
	int retorno = -1;

	if(ll_isEmpty(listaMain) == 0)
	{
		retorno = auxiliar_modificarAtaque(listaMain);
	}
	return retorno;

}

int controller_listar(LinkedList* listaMain)
{
	int retorno = -1;

	if(ll_isEmpty(listaMain) == 0)
	{
		retorno = auxiliares_mostrarPokemones(listaMain);
	}
	return retorno;
}
