#ifndef POKEMONES_H_
#define POKEMONES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"

typedef struct
{
	int id;
	char nombre[40];
	char tipo[30];
	char tamanio[30];
	char ataqueCargado[30];
	int valorAtaque;
	int esVarioColor;
}ePokemones;

ePokemones* pokemon_new();

ePokemones* pokemon_newParametros(char* ID, char* nombre, char* tipo, char* tamanio, char* ataqueCargado, char* valorAtaque,char* esVarioColor);

void pokemon_Delete(ePokemones* this);

int pokemon_SetID(int id, ePokemones* this);

int pokemon_GetID(int* id, ePokemones* this);

int pokemon_SetNombre(char* descripcion, ePokemones* this);

int pokemon_GetNombre(char* descripcion, ePokemones* this);

int pokemon_SetTipo(char* descripcion, ePokemones* this);

int pokemon_GetTipo(char* descripcion, ePokemones* this);

int pokemon_SetTamanio(char* descripcion, ePokemones* this);

int pokemon_GetTamanio(char* descripcion, ePokemones* this);

int pokemon_SetAtaque(char* descripcion, ePokemones* this);

int pokemon_GetAtaque(char* descripcion, ePokemones* this);

int pokemon_SetValorAtaque(int numero, ePokemones* this);

int pokemon_GetValorAtaque(int* numero, ePokemones* this);

int pokemon_SetColor(int color, ePokemones* this);

int pokemon_GetColor(int* color, ePokemones* this);

#endif /* POKEMONES_H_ */
