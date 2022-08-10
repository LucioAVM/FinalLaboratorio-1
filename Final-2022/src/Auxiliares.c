#include "auxiliares.h"

int auxiliares_mostrarPokemones(LinkedList* listaMain)
{
	int retorno = 0;
	int tam;

	ePokemones* pokemon;

	tam = ll_len(listaMain);

	for(int i = 0; i < tam ; i++)
	{
		pokemon = ll_get(listaMain, i);

		if(pokemon != NULL)
		{
			retorno = auxiliares_mostrarUnPokemon(pokemon);
		}else{
			retorno = -1;
			break;
		}
	}


	return retorno;
}


int auxiliares_mostrarUnPokemon(ePokemones* pokemon)
{
	int retorno = -1;

	int id;
	char nombre[40];
	char tipo[30];
	char tamanio[30];
	char ataqueCargado[30];
	int valorAtaque;
	int esVarioColor;

	if(pokemon_GetID(&id, pokemon) == 0
			&& pokemon_GetNombre(nombre, pokemon) == 0
			&& pokemon_GetTipo(tipo, pokemon) == 0
			&& pokemon_GetTamanio(tamanio, pokemon) == 0
			&& pokemon_GetAtaque(ataqueCargado, pokemon) == 0
			&& pokemon_GetValorAtaque(&valorAtaque, pokemon) == 0
			&& pokemon_GetColor(&esVarioColor, pokemon) == 0)
	{
		printf("%-5d - %-30s - %10s - %-5s - %-20s - %-15d - %-5d\n",id, nombre, tipo, tamanio, ataqueCargado, valorAtaque, esVarioColor);
		retorno = 0;
	}

	return retorno;
}


int auxiliar_modificarAtaque(LinkedList* listaMain)
{
	int retorno = -1;
	int opcion;
	int validacion;
	int nuevoValor;
	int valorAux;

	ePokemones* pokemon = NULL;

	auxiliares_mostrarPokemones(listaMain);

	printf("\ningrese el id del pokemon al cual desea modificarle el valor de ataque:");//monsalbo
	fflush(stdin);
	scanf("%d", &opcion);

	pokemon = ll_get(listaMain, opcion);

	if(pokemon != NULL)
	{
		auxiliares_mostrarUnPokemon(pokemon);

		validacion = validacionS_N("este es el pokemon que desea modificar?");

		if(validacion == 1)
		{
			pokemon_GetValorAtaque(&valorAux, pokemon);

			getInt("ingrese el NUEVO valor de ataque", 0, 1000000, &nuevoValor);

			printf("modificado:\n");
			auxiliares_mostrarUnPokemon(pokemon);

			validacion = validacionS_N("esta seguro que quiere realizar los siguientes cambion?");
			if(validacion == 1)
			{
				ll_set(listaMain, opcion, pokemon);
			}
		}
	}

	return retorno;
}
