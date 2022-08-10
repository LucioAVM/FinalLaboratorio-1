#include "pokemones.h"

ePokemones* pokemon_new()
{
	ePokemones* this = NULL;

	this = (ePokemones*)malloc(sizeof(ePokemones));

	return this;
}

ePokemones* pokemon_newParametros(char* ID, char* nombre, char* tipo, char* tamanio, char* ataqueCargado, char* valorAtaque,char* esVarioColor)
{
	ePokemones* this = NULL;

	this = pokemon_new();

	if(this != NULL)
	{
		if(!(pokemon_SetID(atoi(ID), this) == 0
				&& pokemon_SetNombre(nombre, this) == 0
				&& pokemon_SetTipo(tipo, this) == 0
				&& pokemon_SetTamanio(tamanio, this) == 0
				&& pokemon_SetAtaque(ataqueCargado, this) == 0
				&& pokemon_SetValorAtaque(atoi(valorAtaque), this) == 0
				&& pokemon_SetColor(atoi(esVarioColor), this) == 0))
		{
			pokemon_Delete(this);
		}
	}
	return this;
}

void pokemon_Delete(ePokemones* this)
{
	if(this != NULL)
	{
		this = NULL;
	}
	free(this);
}

int pokemon_SetID(int id, ePokemones* this)
{
	int retorno = -1;

	if(id > 0 && this != NULL)
	{
		printf("%d id\n", id);
		this->id = id;
		retorno = 0;
	}

	return retorno;
}
int pokemon_GetID(int* id, ePokemones* this)
{
	int retorno = -1;

	if(id != NULL && this != NULL)
	{
		*id = this->id;
		retorno = 0;
	}

	return retorno;
}

int pokemon_SetNombre(char* descripcion, ePokemones* this)
{
	int retorno = -1;

	if(descripcion != NULL && this != NULL)
	{
		printf("%s nombre \n",descripcion);
		strcpy(this->nombre, descripcion);
		retorno = 0;
	}

	return retorno;
}
int pokemon_GetNombre(char* descripcion, ePokemones* this)
{
	int retorno = -1;

	if(descripcion != NULL && this != NULL)
	{
		strcpy(descripcion, this->nombre);
		retorno = 0;
	}

	return retorno;
}

int pokemon_SetTipo(char* descripcion, ePokemones* this)
{
	int retorno = -1;

	if(descripcion != NULL && this != NULL)
	{
		printf("%s tipo \n",descripcion);
		strcpy(this->tipo, descripcion);
		retorno = 0;
	}

	return retorno;
}
int pokemon_GetTipo(char* descripcion, ePokemones* this)
{
	int retorno = -1;

	if(descripcion != NULL && this != NULL)
	{
		strcpy(descripcion, this->tipo);
		retorno = 0;
	}

	return retorno;
}

int pokemon_SetTamanio(char* descripcion, ePokemones* this)
{
	int retorno = -1;

	if(descripcion != NULL && this != NULL)
	{
		strcpy(this->tamanio, descripcion);
		retorno = 0;
	}

	return retorno;
}
int pokemon_GetTamanio(char* descripcion, ePokemones* this)
{
	int retorno = -1;

	if(descripcion != NULL && this != NULL)
	{
		strcpy(descripcion, this->tamanio);
		retorno = 0;
	}

	return retorno;
}

int pokemon_SetAtaque(char* descripcion, ePokemones* this)
{
	int retorno = -1;

	if(descripcion != NULL && this != NULL)
	{
		strcpy(this->ataqueCargado, descripcion);
		retorno = 0;
	}

	return retorno;
}
int pokemon_GetAtaque(char* descripcion, ePokemones* this)
{
	int retorno = -1;

	if(descripcion != NULL && this != NULL)
	{
		strcpy(descripcion, this->ataqueCargado);
		retorno = 0;
	}

	return retorno;
}

int pokemon_SetValorAtaque(int numero, ePokemones* this)
{
	int retorno = -1;

	if(numero > 0 && this != NULL)
	{
		this->valorAtaque = numero;
		retorno = 0;
	}

	return retorno;
}
int pokemon_GetValorAtaque(int* numero, ePokemones* this)
{
	int retorno = -1;

	if(numero != NULL && this != NULL)
	{
		*numero = this->valorAtaque;
		retorno = 0;
	}

	return retorno;
}

int pokemon_SetColor(int color, ePokemones* this)
{
	int retorno = -1;

	if(color > 0 && this != NULL)
	{
		this->esVarioColor = color;
		retorno = 0;
	}

	return retorno;
}
int pokemon_GetColor(int* color, ePokemones* this)
{
	int retorno = -1;

	if(color != NULL && this != NULL)
	{
		*color = this->esVarioColor;
		retorno = 0;
	}
	return retorno;
}
