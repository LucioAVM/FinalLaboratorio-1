#include "parser.h"

int parser_CargarCSV(LinkedList* listaMain, FILE* pArchivo)
{
	int retorno = 0;

	char id[5];
	char nombre[40];
	char tipo[30];
	char tamanio[30];
	char ataqueCargado[30];
	char valorAtaque[5];
	char esVarioColor[5];

	int validacion;

	ePokemones* pokemon;

	do
	{
		validacion = fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", id,nombre, tipo, tamanio, ataqueCargado, valorAtaque, esVarioColor);//modificar

		if(validacion == 7 && atoi(id) != 0 && atoi(valorAtaque) != 0 && atoi(esVarioColor) != 0)
		{
			pokemon = pokemon_newParametros(nombre, nombre, tipo, tamanio, ataqueCargado, valorAtaque, esVarioColor);

			if(pokemon != NULL)
			{
				if(ll_add(listaMain, pokemon) != 0)
				{
					retorno = -1;
					break;
				}
			}
		}
	}while(!feof(pArchivo));

	return retorno;
}
